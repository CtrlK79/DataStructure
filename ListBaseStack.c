#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void StackInit(Stack *pstack)
{
    pstack->head = NULL;
}

int SIsEmpty(Stack *pstack)
{
    if(pstack->head==NULL)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack *pstack, Data data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    if(pstack->head==NULL)
    {
        newNode->next = NULL;
        pstack->head = newNode;    
    }
    else
    {
        newNode->next = pstack->head;
        pstack->head = newNode;
    }
}

Data SPop(Stack *pstack)
{
    Data rdata;
    Node *rnod;
    if(SIsEmpty(pstack))
    {
        printf("Stack Memory Empty!\n");
        exit(-1);
    }
    
    rnod = pstack->head;
    rdata = pstack->head->data;

    pstack->head = pstack->head->next;
    free(rnod);
    
    return rdata;
}

Data SPeek(Stack *pstack)
{
    if(SIsEmpty(pstack))
    {
        printf("Stack Memonry Empty!\n");
        exit(-1);
    }

    return pstack->head->data;
}