#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ar[x];

    int mx=INT_MIN;
    for(int i=0;i<x;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<x;i++)
    {
       
        // if(ar[i]>mx)
        // {
        //     mx=ar[i];    
        // }
        mx= max(ar[i],mx);
    }
    cout<<mx;
    return 0;
}