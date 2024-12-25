#include <stdio.h>
#include <stdlib.h>

#define ERROR 1e8
typedef int ElementType;
typedef enum
{
    push,
    pop,
    end
} Operation;
typedef enum
{
    false,
    true
} bool;
// 其中Tag是堆栈编号，取1或2；MaxSize堆栈数组的规模；Stack结构定义如下：
typedef int Position;
struct SNode
{
    ElementType *Data;
    Position Top1, Top2;
    int MaxSize;
};
typedef struct SNode *Stack;

Stack CreateStack(int MaxSize);
bool Push(Stack S, ElementType X, int Tag);
ElementType Pop(Stack S, int Tag);

Operation GetOp();                 /* details omitted */
void PrintStack(Stack S, int Tag); /* details omitted */

int main()
{
    int N, Tag, X;
    Stack S;
    int done = 0;

    scanf("%d", &N);
    S = CreateStack(N);
    while (!done)
    {
        switch (GetOp())
        {
        case push:
            scanf("%d %d", &Tag, &X);
            if (!Push(S, X, Tag))
                printf("Stack %d is Full!\n", Tag);
            break;
        case pop:
            scanf("%d", &Tag);
            X = Pop(S, Tag);
            if (X == ERROR)
                printf("Stack %d is Empty!\n", Tag);
            break;
        case end:
            PrintStack(S, 1);
            PrintStack(S, 2);
            done = 1;
            break;
        }
    }
    return 0;
}

// 注意：如果堆栈已满，Push函数必须输出“Stack Full”并且返回false；
//如果某堆栈是空的，则Pop函数必须输出“Stack Tag Empty”（其中Tag是该堆栈的编号），并且返回ERROR。
/* 你的代码将被嵌在这里 */
Stack CreateStack(int MaxSize)
{
    Stack s = (Stack)malloc(sizeof(struct SNode));
    s->Data = (ElementType *)malloc((sizeof(ElementType)) * MaxSize);
    int Top1 = -1;
    int Top2 = MaxSize;
    int MaxSize = MaxSize;
    return s;
}
bool Push(Stack S, ElementType X, int Tag)
{ 
    if (Tag == 1)
    { 
        if (S->Top1 + 1 == S->Top2)//如果栈满
        {
            printf("Stack Full\n");
            return false;
        }
        S->Top1++;
        S->Data[S->Top1] = X;
    }
    else if (Tag == 2)
    {
        if (S->Top2 - 1 == S->Top1) // 如果栈满
        {
            printf("Stack Full\n");
            return false;
        }
        S->Top2--;
        S->Data[S->Top2];
    }
    return true;
}
ElementType Pop(Stack S, int Tag)
{
    int ret = 0;//储存出栈的元素，作为返回值
    if (Tag == 1)
    { 
        if (S->Top1 == -1)//如果栈为空
        {
            printf("Stack Tag Empty\n");
            return false;
        }
        S->Top1--;
        ret = S->Data[S->Top1];
    }
    else if (Tag == 2)
    {
        if (S->Top2 == S->MaxSize) // 如果栈为空
        {
            printf("Stack Tag Empty\n");
            return false;
        }
        S->Top2++;
        ret = S->Data[S->Top2];
    }
    return ret;
}

// 创建堆栈
Stack CreateStack(int MaxSize)
{
    Stack S = (Stack)malloc(sizeof(struct SNode));
    S->Data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
    S->MaxSize = MaxSize;
    S->Top1 = -1;
    S->Top2 = MaxSize;
    return S;
}

// 入栈操作
bool Push(Stack S, ElementType X, int Tag)
{
    if (Tag == 1)
    {
        if (S->Top1 + 1 == S->Top2)
        {
            printf("Stack Full\n");
            return false;
        }
        S->Top1++;
        S->Data[S->Top1] = X;
    }
    else if (Tag == 2)
    {
        if (S->Top2 - 1 == S->Top1)
        {
            printf("Stack Full\n");
            return false;
        }
        S->Top2--;
        S->Data[S->Top2] = X;
    }
    return true;
}

// 出栈操作
ElementType Pop(Stack S, int Tag)
{
    ElementType ret;
    if (Tag == 1)
    {
        if (S->Top1 == -1)
        {
            printf("Stack 1 Empty\n");
            return ERROR;
        }
        ret = S->Data[S->Top1];
        S->Top1--;
    }
    else if (Tag == 2)
    {
        if (S->Top2 == S->MaxSize)
        {
            printf("Stack 2 Empty\n");
            return ERROR;
        }
        ret = S->Data[S->Top2];
        S->Top2++;
    }
    return ret;
}