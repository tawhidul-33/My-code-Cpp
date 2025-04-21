#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World ";
    string s2="I'm Siyam";
    s+=s2;//s=s+s2
    cout<<s<<endl;
    
    s+=" Molla";
    cout<<s<<endl;

    //last a barano hoile akti charecter hoile
    s.push_back('M');//or,,s+='M' 
    cout<<s<<endl<<endl;

    //or
    string str="Hello World ";
    string str2="I'm hear";
    str.append(str2);
    cout<<str<<endl;

    // index er valu poriborton
    str[0]='G';
    cout<<str<<endl;

    //last valu delete 
    str.pop_back();
    cout<<str<<endl;
    return 0;
}