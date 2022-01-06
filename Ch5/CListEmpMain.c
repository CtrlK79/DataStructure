#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

Employee* WorkShift(List *plist, const char *name, int num)
{
    int i;
    Node *temp;
    temp = plist->tail;
    
    for(i=0;i<LCount(plist);++i)
    {
        if(!strcmp(temp->data->name, name))
            break;
        
        temp = temp->next;
    }
    
    for(i=0; i<num; ++i)
        temp = temp->next;
    
    return temp->data;
}

int main()
{
    List list;
    ListInit(&list);
    Employee *pemp;

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp = SetEmployee("A", 7);
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp = SetEmployee("B", 3);
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp = SetEmployee("C", 7);
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp = SetEmployee("D", 11);
    LInsert(&list, pemp);

    pemp = WorkShift(&list, "B", 7);
    

    return 0;
}