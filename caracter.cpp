#include<stdfix.h>//this line just for vscode
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()

{int i,j,k;

     

    for(i=1;i<=5;i++)
    {
        for (j=1;j<=i-1;j++)
        cout<<" ";   
        
        for ( k=1;k<=6-i ;k++)
            cout<<"*"; 
        
        cout<<endl;
        
    }
    
    return 0;
    cin.get();
    cin.get();

}

