#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{float a=1,b=1,c,n,i;
 cin>>n;
 cout<<a<<","<<b;
    for (i=3;i<=n;i++)
    {
        c=a+b;
        cout<<","<<c;
        a=b;
        b=c;
     
    };
    cin.get();
    cin.get(); 
}
