#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{
    plist->numOfData = 0;
    plist->curPosition = 0;
}

void LInsert(List * plist, LData data)
{
    (plist->arr)[plist->numOfData++] = data;
}

int LFirst(List * plist, LData * pdata)
{
    if(plist->numOfData == 0)
        return FALSE;
    
    plist->curPosition = 0;
    *pdata = (plist->arr)[plist->curPosition++];
    return TRUE;
}

int LNext(List * plist, LData * pdata)
{
    if(plist->numOfData-1 < plist->curPosition)
        return FALSE;
    
    *pdata = (plist->arr)[plist->curPosition++];
    return TRUE;
}

LData LRemove(List * plist)
{
    int i;
    LData remove = (plist->arr)[plist->curPosition];
    for(i=plist->curPosition; i<plist->numOfData; i++)
        (plist->arr)[i-1]=(plist->arr)[i];
    (plist->arr)[plist->numOfData-1] = 0;
    plist->numOfData--;
    plist->curPosition--;
    
    return remove;
}

int LCount(List * plist)
{
    return plist->numOfData;
}