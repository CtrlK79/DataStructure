#include <stdio.h>
#include "PriorityQueue.h"

int DataPriority(char ch1, char ch2)
{
    return ch2-ch1;
}

int main()
{
    PQueue pq;
    PQueueInit(&pq, DataPriority);

    PEnqueue(&pq, 'A');
    PEnqueue(&pq, 'X');
    PEnqueue(&pq, 'T');
    PEnqueue(&pq, 'B');
    PEnqueue(&pq, 'K');

    while(!PQIsEmpty(&pq))
        printf("%c ", PDequeue(&pq));
    printf("\n");

    return 0;
}