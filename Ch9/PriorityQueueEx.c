#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriority(char* str1, char* str2)
{
    return strlen(str2)-strlen(str1);
}

int main()
{
    PQueue pq;
    PQueueInit(&pq, DataPriority);

    PEnqueue(&pq, "Hello~!");
    PEnqueue(&pq, "My name is");
    PEnqueue(&pq, "JWK...");
    PEnqueue(&pq, "Glad to meet you all.");
    PEnqueue(&pq, "Bye~");

    while(!PQIsEmpty(&pq))
        printf("%s\n", PDequeue(&pq));
    printf("\n");

    return 0;
}