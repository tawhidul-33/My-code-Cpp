#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello Bangaly";
    
    /*
    //first and last valu print with iterator
    cout<<*s.begin()<<endl<<*(s.end()-1)<<endl;
    */

    //prottekti valu print with iterator without index
    //string::iterator er poriborte ,,auto use korlei hoy
    for(string::iterator it=s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }



    return 0;
}


