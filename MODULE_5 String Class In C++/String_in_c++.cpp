//Power of string in c++ without cher Array[]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    //cin>>s;
    s= "TI Siyam";
    cout<< s<<endl;
    s="Siyam Molla";
    cout<< s<<endl;


    //compare with string
    string s2="Siyam";
    if(s>s2){
        cout<<"Largest=s"<<endl;
    }
    else{
        cout<<"Largest=s2"<<endl;
    }
    //sort function with string
    sort(s2.begin(),s2.end());
    cout<<s2;
    return 0;
}