#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
   int rows;
    int columns;

    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter number of columns: ";
    cin >> columns;

    for(int i = 1; i <= rows; i++)
    {
        for(int j=0; j < columns; j++)
                cout << "* ";
                cout << endl;
    }
    return 0;
   }

