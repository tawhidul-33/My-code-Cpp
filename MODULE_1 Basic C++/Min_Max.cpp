/* 
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<x;
    }
    else
    {
        cout<<y;
    }  
    return 0;
}
*/

// Advance way te
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x,y;
    cin>>x>>y;
   //int z=min(x,y);
   //cout<<z;
    cout<<min(x,y)<<endl;
    cout<<max(x,y)<<endl;

    cout<<min({50,10,40,50})<<endl;
    cout<<max({5,10,40,50})<<endl;
 
    return 0;
}
