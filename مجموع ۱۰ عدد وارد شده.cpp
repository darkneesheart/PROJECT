#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{float i,x,sum;
cout<<"enter ten numbers to get sum of them:";
    for (i=1;i<=10;i++)
    {
     cin>>x;
     sum=sum+x;
    }
    cout<<"javab="<<sum;
    cin.get();
    cin.get();
    return 0; 
}
