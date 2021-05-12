#include<iostream>
using namespace std;

int main()
{
    int a[5]={15,20,34,50,17},l=0,b;
    cout <<a[0]<<" ";
    for (int i=1;i<5;i++){
    a[i]=a[i]+a[i-1];
    cout<<a[i]<<" ";
    }
    cout<<"\n";
    while(l!=-1){
    cin>>l>>b;
    if (l== -1) break;
    if (l==0 && b==0) cout<<a[0];
    if (l==0 && b!=0) cout<<a[b];
    if (l!=0)
     cout<<a[b]-a[l];
    }
    return (0);
    }