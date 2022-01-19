#include <stdio.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

int main()
{
    BTreeNode *avlRoot;
    BTreeNode *clNode;
    BTreeNode *crNode;
    BSTMakeAndInit(&avlRoot);

    for(int i=1; i<10; ++i)
        BSTInsert(&avlRoot, i);
    
    printf("Root Node: %d\n", GetData(avlRoot));

    clNode = GetLeftSubTree(avlRoot);
    crNode = GetRightSubTree(avlRoot);
    printf("Left1: %d, Right1: %d\n", GetData(clNode), GetData(crNode));

    clNode = GetLeftSubTree(clNode);
    crNode = GetRightSubTree(crNode);
    printf("Left2: %d, Right2: %d\n", GetData(clNode), GetData(crNode));

    return 0;
}
