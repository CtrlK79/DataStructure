#include <stdio.h>

typedef struct _empInfo
{
    int empNum;
    int age;
} EmpInfo;

int main()
{
    EmpInfo empInfoArr[1000];
    EmpInfo ei;
    int eNum;

    printf("Enter id and age: ");
    scanf("%d %d", &(ei.empNum), &(ei.age));
    empInfoArr[ei.empNum] = ei;

    printf("Enter the id of the employee you wanna check: ");
    scanf("%d ", &eNum);

    ei = empInfoArr[eNum];
    printf("id:%d, age:%d\n", ei.empNum, ei.age);

    return 0;
}