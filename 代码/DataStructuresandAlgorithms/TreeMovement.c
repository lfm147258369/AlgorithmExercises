
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode
{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

void PreorderTraversal(BinTree BT); /* 先序遍历，由裁判实现，细节不表 */
void InorderTraversal(BinTree BT);  /* 中序遍历，由裁判实现，细节不表 */

BinTree Insert(BinTree BST, ElementType X);
BinTree Delete(BinTree BST, ElementType X);
Position Find(BinTree BST, ElementType X);
Position FindMin(BinTree BST);
Position FindMax(BinTree BST);

int main()
{
    BinTree BST, MinP, MaxP, Tmp;
    ElementType X;
    int N, i;

    BST = NULL;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        BST = Insert(BST, X);
    }
    printf("Preorder:");
    PreorderTraversal(BST);
    printf("\n");
    MinP = FindMin(BST);
    MaxP = FindMax(BST);
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        Tmp = Find(BST, X);
        if (Tmp == NULL)
            printf("%d is not found\n", X);
        else
        {
            printf("%d is found\n", Tmp->Data);
            if (Tmp == MinP)
                printf("%d is the smallest key\n", Tmp->Data);
            if (Tmp == MaxP)
                printf("%d is the largest key\n", Tmp->Data);
        }
    }
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        BST = Delete(BST, X);
    }
    printf("Inorder:");
    InorderTraversal(BST);
    printf("\n");

    return 0;
}
/* 你的代码将被嵌在这里 */
// 插入函数
BinTree Insert(BinTree BST, ElementType X)
{
    if (BST == NULL)
    {
        // 当树为空时，创建新节点并返回作为新的根节点
        BinTree newNode = (BinTree)malloc(sizeof(struct TNode));
        newNode->Data = X;
        newNode->Left = NULL;
        newNode->Right = NULL;
        return newNode;
    }
    else if (X < BST->Data)
    {
        // 如果X小于当前节点数据，插入到左子树
        BST->Left = Insert(BST->Left, X);
    }
    else if (X > BST->Data)
    {
        // 如果X大于当前节点数据，插入到右子树
        BST->Right = Insert(BST->Right, X);
    }
    // 如果X等于当前节点数据，不做处理（或者可以返回BST，表示不重复插入）
    return BST;
}

// 删除函数
BinTree Delete(BinTree BST, ElementType X)
{
    if (BST == NULL)
    {
        printf("Not Found\n");
        return BST;
    }
    else if (X < BST->Data)
    {
        BST->Left = Delete(BST->Left, X);
    }
    else if (X > BST->Data)
    {
        BST->Right = Delete(BST->Right, X);
    }
    else
    {
        // 找到要删除的节点
        if (BST->Left == NULL)
        {
            // 只有右子树或没有子树
            BinTree temp = BST;
            BST = BST->Right;
            free(temp);
        }
        else if (BST->Right == NULL)
        {
            // 只有左子树
            BinTree temp = BST;
            BST = BST->Left;
            free(temp);
        }
        else
        {
            // 有两个子树，找到右子树中的最小节点替换当前节点
            BinTree temp = FindMin(BST->Right);
            BST->Data = temp->Data;
            BST->Right = Delete(BST->Right, temp->Data);
        }
    }
    return BST;
}

// 查找函数
Position Find(BinTree BST, ElementType X)
{
    if (BST == NULL)
    {
        return NULL;
    }
    BinTree cur = BST;
    while (cur != NULL)
    {
        if (X > cur->Data)
        {
            cur = cur->Right;
        }
        else if (X < cur->Data)
        {
            cur = cur->Left;
        }
        else
        {
            return cur;
        }
    }
    return NULL;
}

// 找最小元素函数
Position FindMin(BinTree BST)
{
    if (BST == NULL)
    {
        return NULL;
    }
    BinTree cur = BST;
    while (cur->Left)
    {
        cur = cur->Left;
    }
    return cur;
}

// 找最大元素函数
Position FindMax(BinTree BST)
{
    if (BST == NULL)
    {
        return NULL;
    }
    BinTree cur = BST;
    while (cur->Right)
    {
        cur = cur->Right;
    }
    return cur;
}
