#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int n,ar[100];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
       cin>>ar[i];
    }
    
    for(int i=0;i<n;i++)
    {
       cout<<ar[i]<<" ";
    }
    return 0;
}
