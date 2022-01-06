#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main()
{
    List list;
    char *compName;
    NameCard *pnc;
    pnc = (NameCard*)malloc(sizeof(NameCard));

    pnc = MakeNameCard("JaeWoo", "000-1111-2222");
    LInsert(&list, pnc);
    printf("%d", LCount(&list));

    return 0;
}