#define _CRT_SECURE_NO_WARNINGS
//��ƺ����ֱ�������һԪ����ʽ�ĳ˻���͡�
//
//�����ʽ :
//�����2�У�ÿ�зֱ��ȸ�������ʽ������ĸ�����
// ����ָ���ݽ���ʽ����һ������ʽ������ϵ����ָ��������ֵ��Ϊ������1000����������
// ���ּ��Կո�ָ���
//
//�����ʽ :
//�����2�У��ֱ���ָ���ݽ���ʽ����˻�����ʽ�Լ��Ͷ���ʽ�������ϵ����ָ����
// ���ּ��Կո�ָ�������β�����ж���ո������ʽӦ���0 0


typedef struct LNode
{
	int x;//ϵ��
	int z;//ָ��
	List Next;
}*List;
#include <stdio.h>

//��������
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
//�ӷ�����
List Add(List L1, List L2)
{
	//����������ʱ����
	List L1tmp = L1;
	List L2tmp = L2;
	//���Ǵ�������������ӽ��������
	List add = (List)malloc(sizeof(struct LNode));
	add->Next = NULL;//��β��ʼ��ΪNULL
	List head = add;//����ͷλ�ô���������ʱ�򷵻أ�ͨ�����λ�����ҵ�����
	List t;
	while (L1tmp && L2tmp)
	{
		//����һ����㴢��ÿ������������������Ȼ�󽫴˽����뵽add��
		t = (List)malloc(sizeof(struct LNode));
		if (L1tmp->z == L2tmp->z)//ָ����ȣ�ϵ�����
		{
			t->x = L1tmp->x + L2tmp->x;
			t->z = L1tmp->z;
			//Ȼ��L1,L2��������Ų������һ��
			L1tmp = L1tmp->Next;
			L2tmp = L2tmp->Next;
		}
		else if (L1tmp->z > L2tmp->z)//L1��ָ���󣬽�������add������
		{
			t->x = L1tmp->x;
			t->z = L1tmp->z;
			//��L1����Ų�ٱȽ�,L2����ԭ�أ�ֱ��L2�ܷŵ�����
			L1tmp = L1tmp->Next;
		}
		else if (L1tmp->z < L2tmp->z)//L2��ָ���󣬽�������add������
		{
			t->x = L2tmp->x;
			t->z = L2tmp->z;
			L2tmp = L2tmp->Next;

		}
		//�����һ��Ҫ�������Ӧ�ĵ���
		//Ҫ�����ƶ�
		add->Next = t;//����ӽṹ����add�ĺ���
		add = add->Next;//addҪ�����ƶ�����Ϊ�´β����λ��
	}
	if (L1tmp)//L1��ʣ������ӵ���ĺ���
	{
		add->Next = L1tmp;
	}
	else if (L1tmp)//L2ͬ��
	{
		add->Next = L2tmp;
	}
	return head;
}

//�˷�����
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
			t->z = L1tmp->z + L2tmp->z;//ָ�����
			t->x = L1tmp->x * L2tmp->x;//ϵ�����
			head = Add(t, mul);
			head = mul;
		}

	}
	return head;
	
}

//��ӡ
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