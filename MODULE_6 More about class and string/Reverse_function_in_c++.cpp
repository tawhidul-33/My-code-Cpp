/*
//array er khetre 
//5
//1 2 3 4 5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
     for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        
    }

    reverse(ar,ar+n);
    
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
*/

//string er khetre
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="siyam";
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}