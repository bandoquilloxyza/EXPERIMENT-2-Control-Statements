#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
   int x,y;
   
   cout <<"Enter a Number: ";
   cin >> y; 
   cout <<("\n");
   
   for(x=1;x<=10;x++)
   {
     printf("%d X %d = %d \n",y,x,y*x);
   }
}
