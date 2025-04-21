#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[1]<<endl;
    //or
    cout<<s.at(1)<<endl;

    //first and last index er valu print er function
    cout<<s.front()<<endl;//first
    cout<<s.back()<<endl;//last
    

    return 0;
}