#include <stdio.h>
#include <stdio.h>
#include <math.h>
 
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main()
{
    int a[] = {22,25,26,24,21,20};
    int n = sizeof(a)/sizeof(a[0]);
    insertionSort(a, n);
    printf("Sap xep lai : ");
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
