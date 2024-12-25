#include <stdio.h>
#include <stdlib.h>

#define ERROR NULL
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode
{
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

Position Find(List L, ElementType X);
List Insert(List L, ElementType X, Position P);
List Delete(List L, Position P);

int main()
{
    List L;
    ElementType X;
    Position P, tmp;
    int N;

    L = NULL;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &X);
        L = Insert(L, X, L);
        if (L == ERROR)
            printf("Wrong Answer\n");
    }
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &X);
        P = Find(L, X);
        if (P == ERROR)
            printf("Finding Error: %d is not in.\n", X);
        else
        {
            L = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if (L == ERROR)
                printf("Wrong Answer or Empty List.\n");
        }
    }
    L = Insert(L, X, NULL);
    if (L == ERROR)
        printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    tmp = Insert(L, X, P);
    if (tmp != ERROR)
        printf("Wrong Answer\n");
    tmp = Delete(L, P);
    if (tmp != ERROR)
        printf("Wrong Answer\n");
    for (P = L; P; P = P->Next)
        printf("%d ", P->Data);
    return 0;
}

/* 你的代码将被嵌在这里 */

// 查找函数
Position Find(List L, ElementType X)
{
    while (L != NULL)
    {
        if (L->Data == X)
        {
            return L;
        }
        L = L->Next;
    }
    return ERROR;
}

// 插入函数
List Insert(List L, ElementType X, Position P)
{
    Position newNode = (Position)malloc(sizeof(struct LNode));
    if (newNode == NULL)
    {
        return ERROR;
    }
    newNode->Data = X;
    newNode->Next = NULL;

    if (P == NULL)
    {
        // 处理插入位置为NULL的情况，将节点插入到链表尾部
        if (L == NULL)
        {
            return newNode;
        }
        Position last = L;
        while (last->Next != NULL)
        {
            last = last->Next;
        }
        last->Next = newNode;
        return L;
    }

    if (L == P)
    {
        newNode->Next = L;
        return newNode;
    }

    Position prev = L;
    while (prev != NULL && prev->Next != P)
    {
        prev = prev->Next;
    }
    if (prev == NULL)
    {
        free(newNode);
        printf("Wrong Position for Insertion\n");
        return ERROR;
    }
    newNode->Next = prev->Next;
    prev->Next = newNode;
    return L;
}

// 删除函数
List Delete(List L, Position P)
{
    if (P == NULL)
    {
        printf("Wrong Position for Deletion\n");
        return ERROR;
    }
    if (L == P)
    {
        List temp = L;
        L = L->Next;
        free(temp);
        return L;
    }
    Position prev = L;
    while (prev != NULL && prev->Next != P)
    {
        prev = prev->Next;
    }
    if (prev == NULL)
    {
        printf("Wrong Position for Deletion\n");
        return ERROR;
    }
    prev->Next = P->Next;
    free(P);
    return L;
}

