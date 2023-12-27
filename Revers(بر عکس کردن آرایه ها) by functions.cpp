  #include<stdafx.h>
#include<iostream>
using namespace std;
//first function *******
void input(int A[]){
    for(int i=0;i<10;i++)
    cin>>A[i];}
//second function ******
void output(int A[])
     {for (int i=0;i<10;i++)
     cout<<A[i];}
//third function ******
void Rev(int A[],int B[])
{
    int i,j=9;
    for(i=0;i<10;i++)
    B[j--]=A[i];
    }
//main function *******
int main()
{
    int A[10],B[10];
    input(A);
    Rev(A,B);
    output(B);
}

 
