#include <stdio.h>
#include "UsefulHeap.h"

int DataPriority(char ch1, char ch2)
{
    return ch2-ch1;
}

int main()
{
    Heap heap;
    HeapInit(&heap, DataPriority);

    HInsert(&heap, 'A');
    HInsert(&heap, 'C');
    HInsert(&heap, 'D');
    HInsert(&heap, 'B');
    HInsert(&heap, 'E');

    while(!HIsEmpty(&heap))
        printf("%c ", HDelete(&heap));
    printf("\n");

    return 0;
}