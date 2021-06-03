#include <stdio.h>
#pragma warning(disable:4996)

#define size 5
int main()
{
 int n;
 printf("find number\n");
 scanf("%d", &n);
 int array[size] = { 0,5,8,3,4 };
 for (int i = 0;i < size;i++)
 {
  if (array[i]==n)
  {
   printf("found it %d\n", array[i]);
   printf("index is %d\n",i);
  }
 }
}