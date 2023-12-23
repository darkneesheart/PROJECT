#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{float i,n,x,pow=1,f=1;
    cout<<"to see answer of  x^n/n!"<<endl<<"x=";
    cin>>x;
    cout<<"n=";
    cin>>n;
   for (i=1;i<=n;i++)
    {
     pow=x*pow;
     f=f*i;
    }
    cout<<"javab="<<pow/f;
    cin.get();
    cin.get();
    return 0;
}
