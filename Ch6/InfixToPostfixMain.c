#include <stdio.h>
#include "InfixToPostfix.h"

int main()
{
    char exp1[] = "1+2*3";

    ConvToRPNExp(exp1);
    
    printf("%s\n", exp1);

    return 0;
}