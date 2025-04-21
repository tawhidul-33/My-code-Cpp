#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if('0'<=x && x<='9')
    {
      cout<<"IS DIGIT";
    }
    else if('A'<=x&&x<='Z')
    {
       cout<<"ALPHA"<<endl<<"IS CAPITAL"; 
    }
    else if('a'<=x&&x<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL"; 
    }
    return 0;
}