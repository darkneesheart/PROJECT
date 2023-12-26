#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{float i,n,x,pow=1,f=1;
    cin>>n;
    cin>>x;
   for (i=1;i<=n;i++)
    {
     pow=x*pow;
     f=f*i;
    }
    cout<<"javab="<<pow/f;

    return 0;
}
