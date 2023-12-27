#include<iostream>
#include<cmath>
using namespace std;
int main()
{double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d =(b*b)-(4*a*c);
    cout<<"Delta= "<<d<<endl;
    if(d<0)
    cout<<"not";
    else{
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"x1= "<<x1<<endl<<"x2= "<<x2;
        }
   
    return 0;
}
