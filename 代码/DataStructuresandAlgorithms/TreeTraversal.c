#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode
{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree(); /* 实现细节忽略 */
void InorderTraversal(BinTree BT);
void PreorderTraversal(BinTree BT);
void PostorderTraversal(BinTree BT);
void LevelorderTraversal(BinTree BT);

int main()
{
    BinTree BT = CreatBinTree();
    printf("Inorder:");
    InorderTraversal(BT);
    printf("\n");
    printf("Preorder:");
    PreorderTraversal(BT);
    printf("\n");
    printf("Postorder:");
    PostorderTraversal(BT);
    printf("\n");
    printf("Levelorder:");
    LevelorderTraversal(BT);
    printf("\n");
    return 0;
}
/* 你的代码将被嵌在这里 */
void InorderTraversal(BinTree BT)
{
    BinTree stack[100];
    int top = 0;
    BinTree cur = BT;

    while (cur != NULL || top > 0)
    {
        if (cur != NULL)
        {
            stack[top++] = cur;
            cur = cur->Left;
        }
        else
        {
            cur = stack[--top];
            printf(" %c", cur->Data);
            cur = cur->Right;
        }
    }
}
//dfs
//bfs
void PreorderTraversal(BinTree BT)
{
    BinTree stack[100];
    int top = 0;
    if (BT != NULL)
    {
        stack[top++] = BT;
        while (top > 0)
        {
            BinTree cur = stack[--top];
            printf(" %c", cur->Data);
            if (cur->Right != NULL)
                stack[top++] = cur->Right;
            if (cur->Left != NULL)
                stack[top++] = cur->Left;
        }
    }
}
// void PostorderTraversal(BinTree BT)
// {
//     BinTree stack[100]; // 树结点的栈
//     int top = 0;        // 结点栈的栈顶
//     int stackflag[100]; // 哨兵栈
//     int flagtop = 0;    // 哨兵栈的栈顶
//     BinTree cur = BT;
//     BinTree last = NULL;
//     while (cur != NULL || top > 0)
//     {
//         while (cur != NULL)
//         {
//             stack[top++] = cur;
//             stackflag[flagtop++] = 0;
//             cur = cur->Left;
//         }
//         cur = stack[--top];
//         if (stackflag[--flagtop] == 1 || cur->Right == NULL)
//         {
//             printf(" %c", cur->Data);
//             last = cur;
//             cur = NULL;
//         }
//         else
//         {
//             stack[top++] = cur;
//             stackflag[flagtop++] = 1; // 右边树被处理过
//             cur = cur->Right;
//         }
//     }
// }

// void PostorderTraversal(BinTree BT)
// {
//     BinTree stack[100];
//     int top = -1;
//     BinTree lastVisited = NULL;
//     while (BT || top >= 0)
//     {
//         while (BT)
//         {
//             stack[++top] = BT;
//             BT = BT->Left;
//         }
//         BT = stack[top];
//         // 如果右子树为空或者右子树已经被访问过
//         if (BT->Right == NULL || BT->Right == lastVisited)
//         {
//             printf(" %c", BT->Data);
//             lastVisited = BT;
//             top--;
//             BT = NULL;
//         }
//         else
//         {
//             BT = BT->Right;
//         }
//     }
// }

void LevelorderTraversal(BinTree BT)
{
    BinTree queue[100];
    int front = 0;
    int rear = 0;
    if (BT != NULL)
    {
        queue[rear++] = BT;
        while (front < rear)
        {
            BinTree cur = queue[front++];
            printf(" %c", cur->Data);
            if (cur->Left != NULL)
                queue[rear++] = cur->Left;
            if (cur->Right != NULL)
                queue[rear++] = cur->Right;
        }
    }
}

void PostorderTraversal(BinTree BT)
{
    BinTree stack[100];
    int top = -1;
    BinTree last = NULL;
    while (top >= 0 || BT)
    {
         while (BT)
         {
             stack[++top] = BT;
             BT = BT->Left;
         }
         BT = stack[top];
         if (BT->Left != last || BT->Right == NULL)
         {
             printf(" %c", BT->Data);
             last = BT;
             BT = NULL;
             top--;
         }
         else
         {
             BT = BT->Right;
         }
    }
} 