#include <stdio.h>

void swap(int *xp,int *yp)
 {
 int temp = *xp; //temp now has the balue of XP
 *xp = *yp; //XP now has the value of YP
 *yp = temp; //YP now has the value of XP
 }

void bubbleSort(int array[], int n)
{
 int i, j;
 for (i = 0;i < n - 1;i++) //cycle through array
 {
  for (j = 0;j < n - i - 1;j++) //cycle through numbers
  {
   if (array[j] > array[j+1]) //checks if J is bigger than j+1 if it is true the swap func is called if not the cycle continues
   {
    swap(&array[j], &array[j+1]);
   }
  }
 }
}

void printArray(int array[], int arraySize)
{
 int i;
 for (i = 0;i < arraySize;i++) //print array items by index number
 {
  printf("%d ", array[i]);
  printf("\n");
 }
}

int main()
{
 int array[] = { 80,56,12,8,3,6,43 };
 int n = sizeof(array) / sizeof(array[0]);
 printf("array sorting has begun...\n");
 bubbleSort(array, n);
 printf("printing array\n");
 printArray(array, n);
 return 0;
}