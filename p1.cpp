#include<iostream>
using namespace std;

int main()
{
    int a[6]={4,5,0,2,3,1},i,j,k,s;
    int b[6],c[6];
    s=5;
    for(j=0;j<6;j++){
    b[0]=a[j];
    c[0]=b[0];
   // cout<<b[0];
   for (i=j+1,k=1;i<6;i++,k++){
   // if (a[i-1]%5==0) cout<<a[i-1];
        b[k]=b[k-1]+a[i];
        c[k]=a[i];
      //  cout<<b[k];
    }
   cout<<"\n";
    
   for(i=0;i<=s;i++)
   if (b[i]%5==0){cout<<"[";  
   //     
  // if (i==0) cout <<b[i]<<"\n";
   // else{
      for (k=0;k<=i;k++)
          
     cout<<c[k]<<" ";
   cout<<"]"<<"\n";
   }
        
    s--;
   }
    return 0;
    }
    