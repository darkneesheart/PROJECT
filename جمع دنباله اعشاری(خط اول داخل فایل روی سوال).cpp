//1/2+1/3+1/4+.....+1/100
#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{float i,x,sum,ave;
    for (i=1;i<=100;i=i++)
    {
     
     
     sum=sum+1/i;
    }
    
    cout<<"javab="<<sum;
    return 0;
}
