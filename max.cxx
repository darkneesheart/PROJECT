#include<stdafx.h>
#include<iostream>
#include<cmath>
using namespace std;
//first function #####
void input(int A[])
{for (int i=0;i<10;i++)
cin>>A[i];}
//second function#####
int max(int A[])
{int m=0;
for(int i=0;i<10;i++)
if (A[i]>m)
m=A[i];
return m;}
//main function for call function 1&2
int main()
{int A[10];
input(A);
cout<<"maximum ="<<max(A);
    
return 0;
}
