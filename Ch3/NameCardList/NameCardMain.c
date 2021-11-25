#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void)
{
    int i;
    char target[20] = "HJ";
    char phone_change[20] = "111-0000-5555";
    NameCard * temp;
    List list;
    ListInit(&list);

    LInsert(&list, MakeNameCard("JW", "000-1111-2222"));
    LInsert(&list, MakeNameCard("HJ", "000-3333-4444"));
    LInsert(&list, MakeNameCard("JY", "000-5555-6666"));

    puts("====== 이름이 HJ인 사람 찾기 ======");
    if(LFirst(&list, &temp))
    {
        if(!NameCompare(temp, target))
            ShowNameCardInfo(temp);

        while(LNext(&list, &temp))
        {
            if(!NameCompare(temp, target))
                ShowNameCardInfo(temp);
        }
    }

    puts("====== 이름이 HJ인 사람 번호 바꾸기 ======");
    if(LFirst(&list, &temp))
    {
        if(!NameCompare(temp, target))
            ChangePhoneNum(temp, phone_change);
        ShowNameCardInfo(temp);

        while(LNext(&list, &temp))
        {
            if(!NameCompare(temp, target))
                ChangePhoneNum(temp, phone_change);
            ShowNameCardInfo(temp);
        }
        
    }

    puts("====== 이름이 HJ인 사람 지우기 ======");
    if(LFirst(&list, &temp))
    {
        if(!NameCompare(temp, target))
        {
            temp = LRemove(&list);
            free(temp);
        }
        while(LNext(&list, &temp))
        {
            if(!NameCompare(temp, target))
            {
                temp = LRemove(&list);
                free(temp);
            }
        }
    }
    
    printf("전화번호부에 남은 사람의 수: %d \n", LCount(&list));

    if(LFirst(&list, &temp))
    {
        ShowNameCardInfo(temp);

        while(LNext(&list, &temp))
            ShowNameCardInfo(temp);
    }
    
    return 0;
}