#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    string s ="siyam";//manualy way
    cout<<s<<endl;
    */

    //:-constructor use kore
    //1_way
    //string s("Hello");
    //cout<<s<<endl;

    //2_way
    //string s("hello world",3);// 3 mane first 3ta valo print korbe
    //cout<<s<<endl;

    //3_way
    //string s(5,'A');//5ta A charecter print hobe
    //cout<<s<<endl;
    //4_way
    string s="molla";
    string t(s,2);//aikhane first 2ta valu delete kore print hobe
    cout<<t<<endl;
    return 0;
}