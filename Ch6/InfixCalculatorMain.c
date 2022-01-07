#include <stdio.h>
#include <string.h>
#include "InfixCalculator.h"

#define FORMULAR_LEN 100

int main()
{
    char exp[FORMULAR_LEN];
    while(1)
    {
        printf("Enter a formular(exit:0): ");
        if(!strcmp(exp, "0"))
            break;
        scanf("%s", exp);
        printf("%s = %d \n", exp, EvalInfixExp(exp));
    }

    return 0;
}