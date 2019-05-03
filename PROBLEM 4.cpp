#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	
	int x, y, z;
	
	cout<<"Enter the First Number: ";
	cin>>x;
	
	cout<<"Enter the Second Number: ";
	cin>>y;
	
	cout<<"Enter the Third Number: ";
	cin>>z;
	
if(x>y && y>z && x>z)  
{
	cout<<"\nThe LARGEST of the three numbers is: "<<x;
 } 

  else if(x>z && z>y && x>z)  
{
	cout<<"\nThe LARGEST of the three numbers is: "<<x;
 } 
 
 else if(y>x && x>z && y>z) 
{
	cout<<"\nThe LARGEST of the three numbers is: "<<y;
 } 
 
 else if(y>z && z>x && y>x) 
{
	cout<<"\nThe LARGEST of the three numbers is: "<<y;
 } 
 
 else if (z>y && y>x && z>x) 
{
	cout<<"\nThe LARGEST of the three numbers is: "<<z;

} 

 else if (z>x && x>y && z>y) 
{
	cout<<"\nThe LARGEST of the three numbers is: "<<z;
} 

 else if(x==y && y>z && x>z)  
{
	cout<<"\nThe LARGEST of the three numbers is: "<<x;
 } 

 else if(x==y && y<z && x<z)   
{
	cout<<"\nThe LARGEST of the three numbers is: "<<z;

 } 
  else if(x==z && z>y && x>y)  
{
	cout<<"\nThe LARGEST of the three numbers is: "<<x;
 } 
   else if(x==z && z<y && x<y)  
{
	cout<<"\nThe LARGEST of the three numbers is: "<<y;
 } 
 
  else if(y==z && y>x && z>x) 
{
	cout<<"\nThe LARGEST of the three numbers is: "<<y;
}
 
 else if(y==z && y<x && z<x) 
{
	cout<<"\nThe LARGEST of the three numbers is: "<<x;
}

 else if(y==z && y==x && z==x) 
{
	cout<<"\n ALL NUMBERS ARE EQUAL:"<<x;

}


+getch(); 
return 0;
}
