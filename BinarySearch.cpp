#include<stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
  if (right >= left) {
    int mid =  (right + left) / 2; 
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return binarySearch(arr, left, mid - 1, x);
    return binarySearch(arr, mid + 1, right, x);
  }
  return -1;
}
 
int main(void) {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1)
    printf("%d xuat hien tai chi so %d", x, result);
  else
    printf("%d xuat hien tai chi so %d", x , result);
  return 0;
}
 
