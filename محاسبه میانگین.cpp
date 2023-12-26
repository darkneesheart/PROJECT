#include<stdfix.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{int i,sum,n=5,num;
 float ave;
    
    for ( i=0; i<n; i++){
    cout<<"enter number "<<i+1<<": ";
    cin>>num;
    sum=sum+num;}
    ave=static_cast<float>(sum)/n;
    
    cout<<"the avrage is: "<<ave<<endl;

    cin.get();
    cin.get();
    return 0;
}
