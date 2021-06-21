#include <stdio.h>

#pragma warning(disable:4996)

void swap(int* xp, int* yp)
{
 int temp = *xp;
 *xp = *yp;
 *yp = temp;
}

void fill_array(int arr[], int n)
{
 int count=0;
 for (int index = 0;n > index;index++)
 {
  int szam;
  printf("%d index: ", count++);
  scanf("%d ", &szam);
  if (szam > 0 && szam < 10)
  {
   arr[index] = szam;
  }
  else
  {
   printf("0 vagy 10 kozott irjal szamot\n");
  }
 }
}

void find_num(int arr[], int size,int find) //use if desperate
{
 for (int i = 0;i < size;i++)
 {
  if (arr[i] == find)
  {
   printf("found it %d\n", find);
   printf("index is %d\n", i);
  }
 }
}

void bubbleSort(int array[], int n)
{
 int i, j;
 for (i = 0;i < n - 1;i++) 
 {
  for (j = 0;j < n - i - 1;j++) 
  {
   if (array[j] > array[j + 1]) 
   {
    swap(&array[j], &array[j + 1]);
   }
  }
 }
}

void printarray(int arr[], int n)
{
 for (int i = 0;n > i;i++)
 {
  printf("%d ", arr[i]);
 }
}

int main()
{
 int array[20] = { 0 };
 fill_array(array, 20);
 bubbleSort(array, 20);
 printarray(array, 20);
 printf("\nwhich num would you like to find?\n");
 int num;
 scanf("%d ", &num);
 find_num(array, 20, num);
}