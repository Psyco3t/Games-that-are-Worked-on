#include <iostream>
using namespace std;

/*Németh Attila, 2021.4.18., 26220014, osszes hazi*/

 void feladat1()
 {
  cout << "1.feladat\n" << endl;
  int sor_szam = 8;
  for (int i = 8;i >= 1;--i)
  {
   for (int space = 0; space < sor_szam - i; ++space)
   {
    cout << " ";
   }
   for (int szam = 1;szam <= i;++szam)
   {
    cout << szam;
   }
   cout << endl;
  }
 }

void feladat2()
{
 cout << "\n2.feladat\n" << endl;
 int num = 9;
 for (int j = 1;j <= 8;++j)
 {
  num -= 1;
  for (int invert = num;invert >= 1;--invert)
  {
   cout << invert;
  }
  cout << endl;
 }
}

void feladat3()
{
 int rep = 0;
 cout << "\n3.feladat\n" << endl;
 for (int i = 1;i <= 8;++i)
 {
  rep += 1;
  for (int space = 7;space >= i;--space)
  {
   cout << " ";
  }
  for (int nums = rep;nums >= 1;--nums)
  {
   cout << nums;
  }
  cout << endl;
 }
}

void feladat4()
{
 cout << "\n4.feladat\n" << endl;
 int rep = 0;
 for (int i = 1;i <= 8;i++)
 {
  rep += 1;
  for (int space = 7;space >= i;--space)
  {
   cout << " ";
  }
  for (int nums = 1;nums <= i;++nums)
  {
   cout << nums;
  }
  for (int nums2 = rep;nums2 >= 2;--nums2)
  {
   cout << nums2 - 1;
  }
  cout << endl;
 }
}

void feladat5()
{
 cout << "\n5.Feladat\n" << endl;
 int sorok = 0;
 int sor_szam = 8;
 for (int i = 8;i >= 1;--i)
 {
  sorok += 1;
  for (int space = 0; space < sor_szam - i; ++space)
  {
   cout << " ";
  }
  for (int num = 1;num <= i;++num)
  {
   cout<< num;
  }
  for (int num2 = 8 - sorok;num2 >= 1;--num2)
  {
   cout << num2;
  }
  cout << endl;
 }
}

 int main()
 {
  feladat1();
  feladat2();
  feladat3();
  feladat4();
  feladat5();
 }