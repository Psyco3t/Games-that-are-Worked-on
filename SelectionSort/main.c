#include <stdio.h>

void swap(int *a,int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

void selectionSort(int array[],int n)
{
 for (int select_num = 0;select_num < n - 1;select_num++)
 {
  int min_num = select_num;
  for (int i = select_num + 1;i < n;i++)
  {
   if (array[i] < array[min_num])
   {
    min_num = i;
   }
  }
  swap(&array[min_num], &array[select_num]);
 }
}

void printArray(int array[], int size)
{
 for (int i = 0;i < size;i++)
 {
  printf("%d ", array[i]);
 }
 printf("\n");
}

int main()
{
 int numberArray[] = {20,5,14,2,7,9,24,22,17};
 int size = sizeof(numberArray) / sizeof(numberArray[0]);
 selectionSort(numberArray, size);
 printf("Sorting array..\n");
 printArray(numberArray, size);
 printf("DONE");
}