#ifndef __CLL_BASE_STACK_H__
#define __CLL_BASE_STACK_H__

#include "CLinkedList.h"

typedef struct _clistbasestack
{
    List *plist;
} CListBaseStack;

typedef CListBaseStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);
void SPush(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);


#endif