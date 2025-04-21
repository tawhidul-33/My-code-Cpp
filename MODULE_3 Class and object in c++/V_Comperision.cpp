//input 5 > 4 ba 9 < 1 ba 4 = 4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    char c;
    cin>>a>>c>>b;
    if(c=='<'&&a<b)
    {
        cout<<"Right";
    }
    else if(c=='>'&&a>b)
    {
        cout<<"Right";
    }
    else if(c=='='&&a==b)
    {
        cout<<"Right";
    }
    else 
    {
        cout<<"Wrong";
    }
    return 0;
}