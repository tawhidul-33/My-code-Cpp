// 3
// siyam molla
// 33 90
// rakib ahmed
// 34 87
// akib hosen
// 39 80
/*
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rool;
    int mark;
};
int main()
{
    int n;
    cin>>n;
    student ar[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,ar[i].name);
        cin>>ar[i].rool>>ar[i].mark;
    }
    int mn = INT_MAX;
    int mx=INT_MIN;

    for(int i=0;i<n;i++)
    {
        mn=min(ar[i].mark,mn);
        mx=max(ar[i].mark,mx);
    }
    cout<<"Max="<<mx<<endl<<"MIN="<<mn;
    return 0;
}
*/

//min_max name rool mark soho
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rool;
    int mark;
};
int main()
{
    int n;
    cin>>n;
    student ar[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,ar[i].name);
        cin>>ar[i].rool>>ar[i].mark;
    }
    student mn,mx;
     mn.mark = INT_MAX;
     mx.mark = INT_MIN;

    for(int i=0;i<n;i++)
    {
        //min
        if(ar[i].mark<mn.mark)
        {
            mn=ar[i];
        }
        //max 
         if(ar[i].mark>mx.mark)
        {
            mx=ar[i];
        }

    }
    cout<<mn.name<<" "<<mn.rool<<" "<<mn.mark<<endl;
    cout<<mx.name<<" "<<mx.rool<<" "<<mx.mark<<endl;
    return 0;
}