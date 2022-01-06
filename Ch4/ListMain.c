#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

// int WhoIsPrecede(int d1, int d2)
// {
//     if(d1 < d2)
//         return 0;
//     else
//         return 1;
// }

int WhoIsPrecede(Point *pos1, Point *pos2)
{
    if(pos1->xpos<pos2->xpos || ((pos1->xpos==pos2->xpos) && (pos1->ypos<pos2->ypos)))
        return 0;
    else
        return 1;
}

int main()
{
    List list;
    ListInit(&list);
    Point *ppos;
    Point *compPos;

    SetSortRule(&list, WhoIsPrecede);

    // LInsert(&list, 33); LInsert(&list, 11);
    // LInsert(&list, 22); LInsert(&list, 11);
    // LInsert(&list, 22);
    
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 1, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 1, 0);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 3);
    LInsert(&list, ppos);

    printf("현재 저장된 데이터 수: %d \n", LCount(&list));

    if(LFirst(&list, &ppos))
    {
        // printf("%d ", data);
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
            // printf("%d ", data);
            ShowPointPos(ppos);
    }
    printf("\n\n");

    compPos = (Point*)malloc(sizeof(Point));
    compPos->xpos = 1; compPos->ypos=2;
    if(LFirst(&list, &ppos))
    {
        if(PointComp(ppos, compPos)==1)
            LRemove(&list);
        while(LNext(&list, &ppos))
        {
            if(PointComp(ppos, compPos)==1)
                LRemove(&list);
        }
    }

    printf("현재 데이터 수: %d \n", LCount(&list));
    
    if(LFirst(&list, &ppos))
    {
        // printf("%d ", data);
        ShowPointPos(ppos);
        
        while(LNext(&list, &ppos))
            // printf("%d ", data);
            ShowPointPos(ppos);
    }
    printf("\n\n");

    return 0;
}