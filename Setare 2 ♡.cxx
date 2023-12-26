#include<stdafx.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{for(int i=1;i<=5;i++)
 {for (int k=1;k<=i-1;k++)
    cout<<" ";
   for (int j=1;j<=11-2*i;j++)
   cout<<"*";
   cout<<endl;
    }
  

    return 0;
}
