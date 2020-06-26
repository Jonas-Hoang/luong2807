#include <stdio.h>
#include <stdio.h>
#include <math.h>
 void bubbleSort(int a[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
		        a[j] = a[j+1];
		        a[j+1] = temp;
                haveSwap = true; 
            }
        }
        if(haveSwap == false){
            break;
        }
    }
}

int main()
{
    int a[] = {55,53,15,11,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    bubbleSort(a, n);
    printf("Sap xep lai : ");
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
