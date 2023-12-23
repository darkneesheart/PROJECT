#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()

{int n,a,b,i=0,s=0;

    cin>>a>>b; 

    while(i<2){
    
         a=a/10;
         b/=10;
         i++;}
         
       s=a%10+b%10;
       cout<<s<<endl;
    

    return 0;
    cin.get();
}

