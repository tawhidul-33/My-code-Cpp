// icpcAssiut
// egypt
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {   
        string s;
        string t;
        cin>>s>>t;
        string st;
    
        for(int i=0;i<s.size()||i<t.size();i++)
        {
            if(i<s.size()){
                st=st+s[i];
            }
            if(i<t.size()){
                st+=t[i];
            }

        }
        cout<<st<<endl;
    }

    return 0;
}