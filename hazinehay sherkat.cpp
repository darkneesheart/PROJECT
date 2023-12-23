#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{double x,z,penprice,paperprice,interestrate;

cout<<"enter pen price: ";
cin>>penprice;
cout<<"enter paper price: ";
cin>>paperprice;
cout<<"enter interest rate : ";
cin>>interestrate;
x=interestrate/100;
z=((penprice*(1+x)*150)+(paperprice*(1+x)*50));
cout<<endl<<"Hazine next year: "<<z;

cin.get();
cin.get(); 
}
