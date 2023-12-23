#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()

{int i,n,x,k=0,yes,no;

    cin>>n;

    for ( i =1; i<=n; i++)
    
         if(n%i==0)
         k++;
         if(k==2)
         
          cout<<"aval ast"<<endl;
    
          else

         cout<<"aval nist"<<endl;
    
  
  
    return 0;
}
