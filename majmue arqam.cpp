#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()

{int n,b,sum=0;

    cin>>n; 

    while(n>0){
    
         b=n%10;
         sum=sum+b;
         n=n/10;}
    
       cout<<sum<<endl;
    
    
 
    
  
    
    return 0;
    cin.get();
    cin.get();

}

