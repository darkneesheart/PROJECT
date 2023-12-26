#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()

{int i,n,x,k=0;

    cin>>n;

    for ( i =1; i<=n; i++)
    
         if(n%i==0)
         k++;
    
       cout<<k<<endl;
    
    
 
    
  
  
    return 0;
}
