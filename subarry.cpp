#include<iostream>
using namespace std;

int main()
{
int  a[5]={4,8,-1,3,8},i,j,k;
//sub array
for (i=0;i<5;i++){
for (j=i;j<5;j++){
   
  for (k=i;k<j;k++){

    cout<<a[k]<<" ";
   } 
cout<<"\n";
}}
return(0);
}