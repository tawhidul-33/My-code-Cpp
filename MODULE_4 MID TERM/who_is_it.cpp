// 3== test case
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    char name[100];
    char sec;
    int totalm;
};
int main()
{ int t;
cin>>t;
while(t--)
{
    student sakib,rakib,akib;
    cin>>sakib.id>>sakib.name>>sakib.sec>>sakib.totalm;
    cin>>rakib.id>>rakib.name>>rakib.sec>>rakib.totalm;
    cin>>akib.id>>akib.name>>akib.sec>>akib.totalm;

    student highest;
    highest=sakib;
    if(rakib.totalm>highest.totalm ||rakib.totalm==highest.totalm&&rakib.id<highest.id){
        highest=rakib;
    }
    if(akib.totalm>highest.totalm ||akib.totalm==highest.totalm&&akib.id<highest.id){
        highest=akib;
    }
   cout<<highest.id<<" "<<highest.name<<" "<<highest.sec<<" "<<highest.totalm<<endl;
}
    return 0;
}