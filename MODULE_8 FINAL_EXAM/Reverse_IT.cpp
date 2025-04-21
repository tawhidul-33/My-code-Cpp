// 3
// Rakib 7 B 90
// Sakib 10 A 85
// Ahsan 9 C 36
#include<bits/stdc++.h>
using namespace std;
class student
{   public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin>>n;
    
    
    student ar[n];
    for(int i=0;i<n;i++)
    {
       cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id;
         
    }

    char section[n];
    for(int i=0;i<n;i++)
    {
        section[i]=ar[i].s;
    }

    reverse(section,section+n);

    for(int i=0;i<n;i++)
    {
        cout<<ar[i].nm<<" "<<ar[i].cls<<" "<<section[i]<<" "<<ar[i].id<<endl;
         
    }
      
    return 0;
}