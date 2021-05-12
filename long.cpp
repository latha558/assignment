#include<iostream>
using namespace std;
// sum of sub array 
int main()
{
int  a[5]={1,3,1,4,1},i,j,s,k;
int max=0;
for (i=0;i<5;i++){
for (j=i;j<5;j++){
   cout<<"{";
   s=0;
  for (k=i;k<j;k++){
    s+=a[k]; 

    cout<<a[k]<<" ";
   } 

if (s!=0) {cout<<"} sum="<<s<<"\n";}
}}
return(0);
}