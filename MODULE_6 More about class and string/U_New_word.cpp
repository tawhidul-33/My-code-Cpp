//input: EgYpTaz
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int countE=0,countG=0,countY=0,countP=0,countT=0;
    for(char c:s)
    {
        if(c=='E'||c=='e'){countE++;}
        if(c=='G'||c=='g'){countG++;}
        if(c=='Y'||c=='y'){countY++;}
        if(c=='P'||c=='p'){countP++;}
        if(c=='T'||c=='t'){countT++;}
        
        
    }
    int num=min({countE,countG,countY,countP,countT});
    cout<<num;
    return 0;
}