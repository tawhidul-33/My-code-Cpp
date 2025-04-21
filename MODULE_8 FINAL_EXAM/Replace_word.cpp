// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
      string s;
      string t;
      cin>>s>>t;
      //cout<<s<<endl<<t;
      string tmp;
      for(int i=0;i<s.size();i++)
      {
          
             tmp=s.substr(i,t.size());
            if(tmp==t)
            {
                cout<<"#";
                i=i+t.size()-1;
            }
            else
            {
                cout<<s[i];
            }
            
          
      }  
      cout<<endl;
     
    }
    
    return 0;
}