// 3
// 4
// 1 2 3 4
// 4
// 1 1 1 1
// 3
// 1 2 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     
       int ar[n];
       int Ecount=0,Ocount=0;
       for(int i=0;i<n;i++)
       {
         cin>>ar[i];
         if(ar[i]%2==0)
         {
           Ecount++;
         }
         else
         {
           Ocount++;
         }
       }
       
     if(n%2==0)
     {
       int operation =abs((Ecount-Ocount)/2);
       cout<<operation<<endl;
     }
     else
     {
        cout<<"-1"<<endl;
     }
    }

    return 0;
}