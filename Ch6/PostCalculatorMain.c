#include <stdio.h>
#include "PostCalculator.h"

int main()
{
    char postExp1[] = "42*8+";

    printf("%s = %d\n", postExp1, EvalRPNExp(postExp1));

    return 0;
}