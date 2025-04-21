#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int*a=new int[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    int y;
    cin>>y;
    int *a2=new int[y];
    for(int i=0;i<x;i++)
    {
        a2[i]=a[i];
    }
    delete[]a;
    for(int i=x;i<y;i++)
    { 
        cin>>a2[i];
        
    }
    for(int i=0;i<y;i++)
    {
        cout<<a2[i]<<" ";
    }
    delete[]a2;
    return 0;
}