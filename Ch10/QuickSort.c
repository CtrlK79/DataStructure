#include <stdio.h>

void Swap(int arr[], int idx1, int idx2);
int Partition(int arr[], int left, int right);
void QuickSort(int arr[], int left, int right);
int Median(int arr[], int left, int right);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    // int arr[] = {3, 1, 2, 4, 7, 6, 5}

    int len = sizeof(arr) / sizeof(int);
    int i;
    
    QuickSort(arr, 0, len-1);

    for(i=0; i<len; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void Swap(int arr[], int idx1, int idx2)
{
    int temp;
    temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

int Partition(int arr[], int left, int right)
{
    Swap(arr, Median(arr, left, right), left); // You can comment out this line not to use median
    int pivot = arr[left];
    int low = left+1;
    int high = right;

    printf("pivot: %d\n", pivot);

    while(low<=high)
    {
        while(pivot>=arr[low] && low<=right) ++low;
        while(pivot<=arr[high] && high>=(left+1)) --high;
        if(low<=high) Swap(arr, low, high);
    }
    
    Swap(arr, left, high);
    return high;
}

void QuickSort(int arr[], int left, int right)
{
    if(left<=right)
    {
        int pivot=Partition(arr, left, right);
        QuickSort(arr, left, pivot-1);
        QuickSort(arr, pivot+1, right);
    }
}

int Median(int arr[], int left, int right)
{
    int n1, n2, n3;
    n1 = arr[left]; n2 = arr[right]; n3 = arr[(left+right)/2];
    
    if((n1-n2)*(n1-n3)<=0)
        return left;
    else if((n2-n1)*(n2-n3)<=0)
        return right;
    else
        return (left+right)/2;
}