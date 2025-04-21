#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
     int a[x];
    //int *a=new int[x];
    for(int i=0;i<x;i++)
    {
       cin>>a[i];
       
    }
    for(int i=0,j=x-1;i<=j;i++,j--)
    {
       swap(a[i],a[j]);
       
    }
    for(int i=0;i<x;i++)
    {
       cout<<a[i]<<" ";
       
    }
  // delete[] a;

    return 0;
}