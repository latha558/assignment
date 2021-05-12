#include<iostream>
using namespace std;

int main()
{
 int a[5]={4,1,2,3,2},lm,rm,i;
//find equilibrium point in the array.

for(i=0;i<5;i++)
        {
            lm=0;
            rm=0;
            for(int j=0;j<i;j++)
            {
                lm=lm+a[j];
            }
            for(int k=i+1;k<5;k++)
            {
                rm=rm+a[k];
            }
            if(lm==rm)
                cout<<i;
        }
        
    
    return 0;
}