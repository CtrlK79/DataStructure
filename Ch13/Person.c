#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Person.h"

int GetSSN(const Person *p) {return p->ssn;}

void ShowPerInfo(const Person *p)
{
    printf("ID: %d\n", p->ssn);
    printf("Name: %s\n", p->name);
    printf("Address: %s\n", p->addr);
}

Person* MakePersonData(const int ssn, const char *name, const char *addr)
{
    Person *newP = (Person*)malloc(sizeof(Person));
    newP->ssn = ssn;
    strcpy(newP->name, name);
    strcpy(newP->addr, addr);
    
    return newP;
}