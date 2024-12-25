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
List Insert(List L, ElementType X, Position P)
{
    Position new = (Position)malloc(sizeof(struct LNode));
    if (new == NULL)
    {
        return ERROR;
    }
    new->Data = X;
    new->Next = NULL;
    if (P == NULL)
    {
        if (L == NULL)
        {
            return new;
        }
        Position last = L;
        while (last->Next != NULL)
        {
            last = last->Next;
        }
        last->Next = new;
        return L;
    }
    if (P == L)
    {
        new->Next = L;
        return new;
    }
    Position prev = L;
    //反过来写会造成野指针错误，访问空指针
    while (prev != NULL && prev->Next != P) // 这里不同
    {
        prev = prev->Next;
    }
    if (prev == NULL)
    {
        free(new);
        printf("Wrong Position for Insertion\n");
        return ERROR;
    }
    new->Next = prev->Next;
    prev->Next = new;
    return L;
}
List Delete(List L, Position P)
{
    if (P == NULL)
    {
        printf("Wrong Position for Deletion\n");
        return ERROR;
    }
    if (P == L)
    {
        List tmp = L; // 不同
        L = L->Next;
        free(tmp);
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