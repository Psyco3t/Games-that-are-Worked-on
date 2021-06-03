#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

/*Németh Attila, 2021.16.4. ,26220014, 4.feladat */
int main()
{
    srand(time(0));
    int fill_Column;
    int max;
    int columns;
    int rows;
    int MxN_matrice[6][6] =  
    {{0,0,0,0,0,0},
    {0,0,0,0,0,0}, 
    {0,0,0,0,0,0}, 
    {0,0,0,0,0,0}, 
    {0,0,0,0,0,0}
     };
    cout << "Ez a program kiir egy 6x6 os matrixot es megprobalja megkeresni a legnagyobb szamot mindegyik oszlopban\n" << endl;
    cout << "MxN matrix kiiarasa" << endl;
    for (rows = 0;rows < 6; rows++)
    {
        max = MxN_matrice[0][rows];
        for (columns = 0;columns < 6;columns++)
        {
            fill_Column = rand() % 10+10;
            MxN_matrice[rows][columns] = fill_Column;
            cout << "[" << rows << "]" << "[" << columns << "]" << MxN_matrice[rows][columns]<<" ";
        }
        cout << endl;
    }
    cout << "\n";
    cout << "A legnagyobb szam kiemelese egy oszlopban\n";
    for (int i = 0;i < columns;i++)
      {
        max = MxN_matrice[0][i];
        for (int j = 1; j < rows; j++)
        {
            if (MxN_matrice[j][i] > max)
            {
                max = MxN_matrice[j][i];      
                cout << "[" << j << "]" << "[" << i << "]" << max << " ";
            }
            
        }
      }
}

