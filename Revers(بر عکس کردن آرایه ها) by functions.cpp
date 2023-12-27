  #include<stdafx.h>
#include<iostream>
using namespace std;
void output(int A[])
{for (int i=0;i<10;i++)
cout<<A[i];}
void input(int A[]){
    for(int i=0;i<10;i++)
    cin>>A[i];}
void Rev(int A[],int B[])
{
    int i,j=9;
    for(i=0;i<10;i++)
    B[j--]=A[i];
    }
int main()
{
    int A[10],B[10];
    input(A);
    Rev(A,B);
    output(B);
}

 
