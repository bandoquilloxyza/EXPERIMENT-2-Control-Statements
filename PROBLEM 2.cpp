#include <iostream>
using namespace std;

int main ()

{
 cout<<"WATER BILL"<<endl;
 char ch;
 do
 {
  int previous;               
  int current;               
  int gallons;          
  int bill;  
  int demand=35;              
  int late=20;         
  float charge=1.10;
  char balance;       
   
  cout<<"Enter Previous Meter Reading in gallons: ";
  cin>>previous;      
  cout<<"Enter Current Meter Reading in gallons: ";
  cin>>current;      
  cout<<"Paid Previous Bill? (yes or no): ";
  cin>>balance;      
   
  gallons=current+previous;
  
 	 if (balance== 'yes')      
 	{
  		bill=(charge*current)+demand;
  	}
  	else
  	{
   		bill=(charge*gallons)+demand+late;
  	}
  cout<<"Water Bill= P"<<bill<<endl;    
   }
   while(ch=='y--');
   
return 0;
}
