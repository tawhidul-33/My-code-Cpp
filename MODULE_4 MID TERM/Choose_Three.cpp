// 5 :-tast case
// 5 10
// 1 2 3 4 5
// 5 6
// 4 2 3 5 4
// 3 6
// 2 2 2
// 4 4
// 2 8 1 5
// 1 3
// 1
#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{
  int n,sum;
  cin>>n>>sum;
  int ar[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  } 
  int flag=0;
  for(int i=0;i<n-2;i++)
  {
    for(int j=i+1;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(ar[i]+ar[j]+ar[k]==sum)
            {
              flag=1;
              break;
            }
        }
        if(flag==1){break;}
    }
    if(flag==1){break;}
  } 

  flag==1?cout<<"YES":cout<<"NO";
  cout<<endl;
}
    return 0;
}