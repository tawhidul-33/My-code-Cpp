// Sanju john shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
// john /-cheking word
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    getline(cin,s);
    cin>>t;
    int count=0;
    stringstream sm(s);
    string word;
    while(sm>>word)
    {
        if(word==t)
        {
            count++;
        }
    }
 cout<<count;
    
    return 0;
}