//input
//2 * 10 = 19
//or
//5 + 20 = 15
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int d;
    char c;
    char sum;
    cin>>a>>c>>b>>sum>>d;
    if(c=='+')
    { 
        if(a+b==d)
        {
         cout<<"Yes";
        }
        else{
            cout<<a+b;
        }
    }
    else if(c=='-')
    {
        if(a-b==d)
        {
            cout<<"Yes";
        }
        else{
            cout<<a-b;
        }
        
    }
    else if(c=='*')
    {  if(a*b==d)
       {
         cout<<"Yes";
       }
       else{
        cout<<a*b;
       }
        
    }
    return 0;
}