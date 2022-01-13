#include <stdio.h>

void InserSort(int arr[], int n)
{
    int i, j;
    int insData;

    for(i=1; i<n; ++i)
    {
        insData = arr[i];
        j=i-1;

        while(j>=0 && arr[j]>insData)
        {
            arr[j+1] = arr[j];
            --j;
        }
        
        arr[j+1] = insData;
    }
}

int main()
{
    int arr[] = {3, 4, 2, 1};
    int i;

    InserSort(arr, sizeof(arr)/sizeof(int));

    for(i=0; i<sizeof(arr)/sizeof(int); ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}