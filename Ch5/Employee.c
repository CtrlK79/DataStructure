#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

Employee* SetEmployee(char *name, int num)
{
    Employee *pemp;

    strcpy(pemp->name, name);
    pemp->num = num;

    return pemp;
}

void ShowInfo(Employee *pemp)
{
    printf("Name: %s\n", pemp->name);
    printf("Num: %d\n", pemp->num);
}