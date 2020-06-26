#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int a[] = {15, 1, 6, 9, 25, 35};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a, n);
    printf("Sap xep lai : \n");
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
