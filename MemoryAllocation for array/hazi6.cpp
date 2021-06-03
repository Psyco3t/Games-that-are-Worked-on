#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{
 int N;
 cout << "Matrix nagysagat kerem: ";
 cin >> N;
 srand(time_t(0));
 int fill_column, columns, rows; 
 int** NxN_matrice = new int* [N]; //allocates memory
}