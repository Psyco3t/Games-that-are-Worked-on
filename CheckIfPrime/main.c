#include <stdio.h>
#pragma warning(disable:4996)

int checkifPrime(int num) 
{
 int flag = 0;
 for (int i=2;i<=num/2;++i) //responsible for checking if number is prime
 {
  if (num % i == 0)
  {
   flag = 1;
  }
 }
 if(flag==0)
 {
  printf("%d is a prime number\n", num);
 }
 else
 {
  printf("%d is not a prime number\n", num);
 }
}

int main()
{
 printf("input a number: ");
 int n;
 scanf("%d", &n);
 checkifPrime(n);
 checkifPrime(n+10);
 return 0;
}