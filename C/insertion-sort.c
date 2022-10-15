#include <stdio.h>
void insertSort(int a[], int n)
{
  int i, j, temp;
  for (i = 1; i < n; i++) {
    temp = a[i];
    j = i - 1;
    while (j >= 0 && temp <= a[j])
    {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = temp;
  }
}

void printArr(int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}

int main() {
  int arr[] = {23,89,44,90,45};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Before sorting array elements are - \n");
  printArr(arr, n);
  insertSort(arr, n);
  printf("\nAfter sorting array elements are - \n");
  printArr(arr, n);
  return 0;
}
