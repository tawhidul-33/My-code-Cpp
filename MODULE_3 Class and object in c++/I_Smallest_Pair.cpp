#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        int result = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]+ar[j]+j-i<result)
                {
                    result=ar[i]+ar[j]+j-i;
                }
            }
        }
        cout<<result<<endl;
    }
    
    return 0;
}