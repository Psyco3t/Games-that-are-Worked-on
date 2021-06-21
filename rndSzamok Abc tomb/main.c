#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

void print_array(int arr[],int size)
{
 for (int i = 0;i < size;i++)
 {
  printf("%d ", arr[i]);
 }
}

void fill_array(int arr[], int size)
{
 for (int i = 0;i < size;i++)
 {
  int fill_column = rand() % 10 + 5;
  arr[i] = fill_column;
 }
}

int main()
{
 srand(time(0));
 int array_A[20] = { 0 };
 int array_B[20] = { 0 };
 int array_C[20] = { 0 };
 fill_array(array_A, 20);
 fill_array(array_B, 20);
 fill_array(array_C, 20);
 print_array(array_A, 20);
 print_array(array_B, 20);
 print_array(array_C, 20);
}