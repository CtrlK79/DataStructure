#include <stdio.h>
#include "Deque.h"

int main()
{
    int i;
    Deque dq;
    DequeInit(&dq);

    DQAddFirst(&dq, 3); DQAddFirst(&dq, 2); DQAddFirst(&dq, 1);
    DQAddLast(&dq, 4); DQAddLast(&dq, 5);

    
    printf("%d ", DQGetFirst(&dq));
    printf("%d ", DQGetLast(&dq));
    printf("\n");

    while(!DQIsEmpty(&dq))
        printf("%d ", DQRemoveLast(&dq));
    printf("\n");

    return 0;
}