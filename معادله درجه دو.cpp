#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    float a,b,c,x1,x2,x3,delta;

    cout <<"Enter three numbers: ";
    cin >>a>>b>>c;
    delta=(b*b-4*(a*c));
    cout<<"delta="<<delta<<endl;
     

    
    if (delta<0)
      cout<<"no answer";
      
       else if(delta=0)
      {
       (x1=(-b/(2*a)));
       cout<<endl<<x1;
      }
         else {x2=(-b+sqrt(delta))/(2*a));
               x3=(-b-sqrt(delta))/(2*a));
                cout<<endl<<x1<<endl<<x2;}          
    return 0;
    cin.get();
    cin.get();
}
