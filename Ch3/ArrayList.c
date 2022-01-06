#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist)
{
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}

void LInsert(List *plist, LData data)
{
    if(plist->numOfData >= LIST_LEN)
    {
        puts("impossible to save the data");
        return;
    }

    plist->arr[(plist->numOfData)++] = data;
}

int LFirst(List *plist, LData *pdata)
{
    if(plist->numOfData == 0)
        return FALSE;
    
    (plist->curPosition) = 0;
    *pdata = plist->arr[0];
    return TRUE;
}

int LNext(List *plist, LData *pdata)
{
    if(plist->curPosition >= (plist->numOfData)-1)
        return FALSE;
    
    ++(plist->curPosition);
    *pdata = plist->arr[plist->curPosition];
    return TRUE;
}

LData LRemove(List *plist)
{
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    int idx;
    LData rdata = plist->arr[rpos];

    for(idx=rpos; idx<num-1; ++idx)
        plist->arr[idx] = plist->arr[idx+1];
    
    --(plist->numOfData);
    --(plist->curPosition);

    return rdata;
}

int LCount(List *plist)
{
    return plist->numOfData;
}