#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{float i,n,x,pow=1,f=1;
    cout<<"Enter n=";
    cin>>n;
    cout<<"Enter x=";
    cin>>x;
   for (i=1;i<=n;i++)
    {
     pow=x*pow;
     f=f*i;
    }
    cout<<"javab="<<pow/f;

    return 0;
}
