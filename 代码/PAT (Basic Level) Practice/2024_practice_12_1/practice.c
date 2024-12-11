#define _CRT_SECURE_NO_WARNINGS
//设计函数分别求两个一元多项式的乘积与和。
//
//输入格式 :
//输入分2行，每行分别先给出多项式非零项的个数，
// 再以指数递降方式输入一个多项式非零项系数和指数（绝对值均为不超过1000的整数）。
// 数字间以空格分隔。
//
//输出格式 :
//输出分2行，分别以指数递降方式输出乘积多项式以及和多项式非零项的系数和指数。
// 数字间以空格分隔，但结尾不能有多余空格。零多项式应输出0 0


typedef struct LNode
{
	int x;//系数
	int z;//指数
	List Next;
}*List;
#include <stdio.h>

//读入链表
List Read()
{
	List L = (List)malloc(sizeof(struct LNode));
	List head = L;
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		List t = (List)malloc(sizeof(struct LNode));
		int x = 0;
		int z = 0;
		scanf("%d %d", &x, &z);
		t->x = x;
		t->z = z;
		L->Next = t;
		L = L->Next;
	}
	L->Next = NULL;
	return head->Next;
}
//加法运算
List Add(List L1, List L2)
{
	//创建两个临时变量
	List L1tmp = L1;
	List L2tmp = L2;
	//这是储存两个链表相加结果的链表
	List add = (List)malloc(sizeof(struct LNode));
	add->Next = NULL;//表尾初始化为NULL
	List head = add;//将表头位置存起来，到时候返回，通过这个位置来找到链表
	List t;
	while (L1tmp && L2tmp)
	{
		//创建一个结点储存每次两个结点的运算结果，然后将此结点插入到add上
		t = (List)malloc(sizeof(struct LNode));
		if (L1tmp->z == L2tmp->z)//指数相等，系数相加
		{
			t->x = L1tmp->x + L2tmp->x;
			t->z = L1tmp->z;
			//然后L1,L2各自往后挪，找下一个
			L1tmp = L1tmp->Next;
			L2tmp = L2tmp->Next;
		}
		else if (L1tmp->z > L2tmp->z)//L1的指数大，将它放入add链表中
		{
			t->x = L1tmp->x;
			t->z = L1tmp->z;
			//将L1往后挪再比较,L2留在原地，直到L2能放到表中
			L1tmp = L1tmp->Next;
		}
		else if (L1tmp->z < L2tmp->z)//L2的指数大，将它放入add链表中
		{
			t->x = L2tmp->x;
			t->z = L2tmp->z;
			L2tmp = L2tmp->Next;

		}
		//添加完一个要进行相对应的调整
		//要往后移动
		add->Next = t;//把相加结构放在add的后面
		add = add->Next;//add要进行移动，作为下次插入的位置
	}
	if (L1tmp)//L1还剩余把它接到表的后面
	{
		add->Next = L1tmp;
	}
	else if (L1tmp)//L2同理
	{
		add->Next = L2tmp;
	}
	return head;
}

//乘法运算
List Mul(List L1, List L2)
{
	List L1tmp = L1;
	List L2tmp = L2;
	List mul = (List)malloc(sizeof(struct LNode));
	mul->Next = NULL;
	List head = mul;
	List t;
	for (L1tmp = L1; L1tmp; L1tmp = L1tmp->Next)
	{
		for (L2tmp = L2; L2tmp; L2tmp = L2tmp->Next)
		{
			t = (List)malloc(sizeof(struct LNode));
			t->z = L1tmp->z + L2tmp->z;//指数相加
			t->x = L1tmp->x * L2tmp->x;//系数相乘
			head = Add(t, mul);
			head = mul;
		}

	}
	return head;
	
}

//打印
int main()
{
	List L1;
	List L2;
	List add;
	List mul;

	Read(L1);
	Read(L2);

	Print(add);
	Print(mul);

	return 0;
}