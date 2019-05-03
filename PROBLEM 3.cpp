#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	
	int x, y, v;
	float z; 
	
	cout<<"Enter the First Number: ";
	cin>>x;
	
	cout<<"Enter the Second Number: ";
	cin>>y;
	
z=2.5;
v=x-y;
	
if(x=1 && 1<y<5)  
{
	cout<<"V = xyz"<<endl;
	cout<<"V = "<< x*y*z<< endl;
 } 

  else if(x=1 && y>=5)  
{
	cout<<"V = x + y/z"<<endl;
	cout<<"V = "<< x + y/z<< endl;
 } 
 
 else if(x=2 && y<=5) 
{
	cout<<"V = |(x - y)/z|"<<endl;
	if (v<0) {
		cout<<"V = "<< (-v)/z << endl;
	}
	else {
		cout<<"V = "<< (v)/z<< endl;
	}
	
 } 
 
 else if(x=2 && y>5) 
{
	cout<<"V = x + y + z" <<endl;
	cout<<"V = "<< x + y + z << endl;
 } 

+getch(); 
return 0;
}
