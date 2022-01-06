#include <stdio.h>
#include <stdlib.h>

typedef struct __node
{
    int data;
    struct __node *next;
} Node;

int main()
{
    Node *head = NULL;
    // Node *tail = NULL;
    Node *cur = NULL;

    Node *newNode = NULL;
    int readData;

    while(1)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &readData);
        if(readData < 1)
            break;
        
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = head;
        head = newNode;
        
    }
    printf("\n");


    printf("입력 받은 데이터의 전체 출력! \n");
    if(head==NULL)
        printf("저장된 자연수가 존재하지 않습니다.\n");
    else
    {
        cur = head;
        printf("%d ", cur->data);
        
        while(cur->next != NULL)
        {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    if(head==NULL)
    {
        return 0;
    }
    else
    {
        Node *delNode = head;
        Node *delNextNode = head->next;

        printf("%d을(를) 삭제합니다.\n", delNode->data);
        free(delNode);

        while(delNextNode!=NULL)
        {   
            delNode=delNextNode;
            delNextNode=delNode->next;
            printf("%d을(를) 삭제합니다.\n", delNode->data);
            free(delNode);
        }
    }

    return 0;
}