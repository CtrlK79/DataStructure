#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"


void ListInit(List *plist)
{
    Node *dmy1 = (Node*)malloc(sizeof(Node));
    Node *dmy2 = (Node*)malloc(sizeof(Node));
    dmy1->prev = NULL; dmy2->next = NULL;
    dmy1->next = dmy2; dmy2->prev = dmy1;

    plist->head = dmy1;
    plist->tail = dmy2;
    plist->cur = NULL;
    numOfData = 0;
}

LInsert(List *plist, Data data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = plist->tail;
    plist->tail->prev->next = newNode;
    newNode->prev = plist->tail->prev;
    plist->tail->prev = newNode;

    ++(plist->numOfData);
}

int LFirst(List *plist, Data *pdata)
{
    if(plist->head->next == plist->tail)
        return FALSE;
    
    plist->cur = plist->head->next;
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List *plist, Data *pdata)
{
    if(plist->cur->next == plist->tail)
        return FALSE;
    
    plist->cur = plist->cur->next;
    *pdata = plist->cur->data;
    return TRUE;
}

Data LRemove(List *plist)
{
    Node *rpos = plist->cur;
    Data rdata = rpos->data;

    plist->cur = plist->cur->prev;
    rpos->next->prev = rpos->prev;
    rpos->prev->next = rpos->next;

    free(rpos);
    --(plist->numOfData);
    return rdata;
}

int LCount(List *plist)
{
    return plist->numOfData;
}