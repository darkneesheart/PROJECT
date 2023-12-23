#include<stdfix.h>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()

{int i,j;

    for(i=1;i<11;i++){
        for (j=1;j<11;j++)
        cout<<setw(5)<<i*j;
        cout<<endl;
        
    }
    
    return 0;
    cin.get();
    cin.get();

}

