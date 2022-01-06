#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#define NAME_LEN 30

typedef struct __employee
{
    char name[NAME_LEN];
    int num;
} Employee;

Employee* SetEmployee(char *name, int num);
void ShowInfo(Employee *pemp);

#endif