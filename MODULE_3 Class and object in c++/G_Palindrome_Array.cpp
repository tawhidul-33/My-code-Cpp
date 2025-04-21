//5
//1 3 2 3 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int flag=1;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(ar[i]!=ar[j])
        {
            flag=0;
        }
        
    } 
    if(flag==1) 
    {
        cout<<"YES";
    }  
    else{
        cout<<"NO";
    }
    return 0;
}