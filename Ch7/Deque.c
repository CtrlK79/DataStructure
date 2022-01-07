#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void DequeInit(Deque *pdeq)
{
    pdeq->head = NULL;
    pdeq->tail = NULL;
}

int DQIsEmpty(Deque *pdeq)
{
    if(pdeq->head == NULL)
        return TRUE;
    else
        return FALSE;
}

void DQAddFirst(Deque *pdeq, Data data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;

    if(DQIsEmpty(pdeq))
    {
        newNode->next = NULL;
        pdeq->head = newNode;
        pdeq->tail = newNode;    
    }
    else
    {
        newNode->next = pdeq->head;
        pdeq->head->prev = newNode;
        pdeq->head = newNode;
    }

}

void DQAddLast(Deque *pdeq, Data data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(DQIsEmpty(pdeq))
    {
        newNode->prev = NULL;
        pdeq->head = newNode;
        pdeq->tail = newNode;
    }
    else
    {
        newNode->prev = pdeq->tail;
        pdeq->tail->next = newNode;
        pdeq->tail = newNode;
    }
}

Data DQRemoveFirst(Deque *pdeq)
{
    Node *rpos;
    Data rdata;
    
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }

    rpos = pdeq->head;
    rdata = rpos->data;
    pdeq->head = pdeq->head->next;
    free(rpos);
    return rdata;
}

Data DQRemoveLast(Deque *pdeq)
{
    Node *rpos;
    Data rdata;

    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }

    rpos = pdeq->tail;
    rdata = rpos->data;
    pdeq->tail = pdeq->tail->prev;
    free(rpos);
    return rdata;
}

Data DQGetFirst(Deque *pdeq)
{
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }

    return pdeq->head->data;
}

Data DQGetLast(Deque *pdeq)
{
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }

    return pdeq->tail->data;
}