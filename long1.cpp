#include<iostream>
using namespace std;
// longest sub array
int main()
{
int  a[5]={1,3,1,4,1},i,j,s,co,c,l,b;
int max=0,k;
for (i=0;i<5;i++){
for (j=i;j<5;j++){
   s=0;co=0;
  for (k=i;k<=j;k++){
    s+=a[k]; co++;

    cout<<a[k]<<" ";
   } 
cout<<"\n";
if (s>max and co!=5) {max=s;c=co;l=i;b=j;}
}}

cout<<"size of the set"<<c;
for(i=l;i<b;i++) cout<<a[i];
return(0);
}