// 6 /- test case 
// 3
// ABA
// 1
// A
// 3
// ORZ
// 5
// BAAAA
// 4
// BKPT
// 10
// CODEFORCES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;

        string s;
        cin>>s;

        int ar[26]={0};
        int balun=0;
        for(int i=0;i<len;i++)
        {
          if(ar[s[i]-'A']==0)
          {
            balun+=2;
            ar[s[i]-'A']=1;
          }
          else
          {
            balun+=1;

          }
        }
        cout<<balun<<endl;

    }
    
    return 0;
}
