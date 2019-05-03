#include<iostream>
#include<conio.h>
using namespace std;

int main()
{	
int counter;
  cout << "Counting... "<<endl;
  
counter = 1;
for (;counter<=10;)
{
	cout << counter <<",";
	counter++;
}

counter = 10;
for (;counter<=30;)
{
	cout << counter <<",";
	counter = counter + 2;
}
	cout <<endl;
return 0;
		
}
