#include <iostream> 
  
int linearSearch(int a[], int n, int x) 
{  
    for (int i = 0; i < n; i++) 
        if (a[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int a[] = { 2, 3, 4, 10, 40 }; 
    int x = 4; 
    int n = sizeof(a) / sizeof(a[0]); 
    int result = linearSearch(a, n, x); 
    if (result == -1)
    printf("%d xuat hien tai chi so %d", x, result);
  		else
    printf("%d xuat hien tai chi so %d", x , result);
   return 0; 
} 
