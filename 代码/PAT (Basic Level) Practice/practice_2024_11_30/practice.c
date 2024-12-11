#define _CRT_SECURE_NO_WARNINGS
//
//typedef struct Node* PtrToNode;
//struct Node {
//    int Data; /* 存储结点数据 */
//    PtrToNode Next; /* 指向下一个结点的指针 */
//};
//typedef PtrToNode List; /* 定义单链表类型 */
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node* PtrToNode;
//struct Node {
//    int Data; /* 存储结点数据 */
//    PtrToNode Next; /* 指向下一个结点的指针 */
//};
//typedef PtrToNode List; /* 定义单链表类型 */
//
//int FactorialSum(List L);
//
//int main()
//{
//    int N, i;
//    List L, p;
//
//    scanf("%d", &N);
//    L = NULL;
//    for (i = 0; i < N; i++) 
// {
//        p = (List)malloc(sizeof(struct Node));
//        scanf("%d", &p->Data);
//        p->Next = L;  L = p;
//    }
//    printf("%d\n", FactorialSum(L));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int Factorial(int n)
//{
//    int i = 0;
//    int ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}
//
//int FactorialSum(List L)
//{
//    List p = L;
//    int s = 0;
//    while (p)
//    {
//        s += Factorial(p->Data);
//        p = p->Next;
//    }
//    return s;
//}


//#include <stdio.h>
//
//int Factorial(const int N);
//
//int main()
//{
//    int N, NF;
//
//    scanf("%d", &N);
//    NF = Factorial(N);
//    if (NF)  printf("%d! = %d\n", N, NF);
//    else printf("Invalid input\n");
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int Factorial(const int N)
//{
//    int i = 0;
//    int ret = 1;
//    if (N >= 0)
//    {
//        for (i = 1; i <= N; i++)
//        {
//            ret *= i;
//        }
//        return ret;
//    }
//    else
//    {
//        return 0;
//    }
//}

//#include <stdio.h>
//
//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int Count_Digit(const int N, const int D)
//{
//    unsigned int n = N;
//    unsigned k = 0;
//    int count = 0;
//    while (n)
//    {
//        k = n % 10;
//        if (k == D)
//        {
//            count++;
//        }
//        n /= 10;
//    }
//    return count;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#define ERROR -1
//typedef int ElementType;
//typedef struct LNode* PtrToLNode;
//struct LNode {
//    ElementType Data;
//    PtrToLNode Next;
//};
//typedef PtrToLNode List;
//
//List Read(); /* 细节在此不表 */
//
//ElementType FindKth(List L, int K);
//
//int main()
//{
//    int N, K;
//    ElementType X;
//    List L = Read();
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &K);
//        X = FindKth(L, K);
//        if (X != ERROR)
//            printf("%d ", X);
//        else
//            printf("NA ");
//    }
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//ElementType FindKth(List L, int K)
//{
//    if (L == NULL)
//    {
//        return -1;
//    }
//    if (K <= 0)
//    {
//        return -1;
//    }
//
//
//    List p = L;
//    int i = 1;
//    while (p && i < K)
//    {
//        p = p->Next;
//        i++;
//    }
//    if (p != NULL)
//    {
//        return p->Data;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//List MakeEmpty()
//{
//    List L = (List)malloc(sizeof(struct LNode));
//    L->Last = -1;
//    return L;
//}
//Position Find(List L, ElementType X)
//{
//    int i = 0;
//    List p = L;
//    while (i <= L->Last && X != L->Data[i])
//    {
//        i++;
//    }
//    if (i <= L->Last)
//    {
//        return i;
//    }
//    else
//    {
//        return -1;
//    }
//}
//bool Insert(List L, ElementType X, Position P)
//{
//    int j = 0;
//    if (L->Last == MAXSIZE - 1)
//    {
//        printf("FULL");
//        return false;
//    }
//    if (P < 0 || P > L->Last + 1)
//    {
//        printf("ILLEGAL POSITION");
//        return false;
//    }
//    for (j = L->Last; j >= P; j--)
//    {
//        L->Data[j] = L->Data[j - 1];
//    }
//    L->Data[P] = X;
//    L->Last++;
//    return true;
//
//}
//
//bool Delete(List L, Position P)
//{
//    List p = L;
//    if (P < 0 || P > L->Last)
//    {
//        printf("POSITION %d EMPTY", P);
//        return false;
//    }
//    int j = 0;
//
//    if (P < L->Last)
//    {
//        for (j = P; j < L->Last; j++)
//        {
//            L->Data[j] = L->Data[j + 1];
//        }
//    }
//    L->Last--;
//    return true;
//}