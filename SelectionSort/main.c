#include <stdio.h>

void swap(int *a,int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

void selectionSort(int array[],int n)
{
 for (int select_num = 0;select_num < n - 1;select_num++) //select_num i actually the step number as the cycle iterates through the array theres step1 step 2 and step3 at the end 
  //of every step the swap function is called to swap the smallest and largest number
 {
  int min_num = select_num;
  for (int i = select_num + 1;i < n;i++) //cycles through array
  {
   if (array[i] < array[min_num]) //checks if indexed number is smaller than the last smallest number indexed if it is true smallest number is replaced by the indexed number
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
