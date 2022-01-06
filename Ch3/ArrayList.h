#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

// #include "Point.h"
#include "NameCard.h"

#define TRUE        1
#define FALSE       0

#define LIST_LEN    100
// typedef int LData;
// typedef Point* LData;
typedef NameCard* LData;

typedef struct __ArrayList
{   
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List *plist);                 // Initialization
void LInsert(List *plist, LData data);      // Save data

int LFirst(List *plist, LData *pdata);      // Refer to the first data
int LNext(List *plist, LData *pdata);       // Refer to other data

LData LRemove(List *plist);                 // Remove referred data
int LCount(List *plist);                    // Return the number of the saved data

#endif