// 6
// akib 2 R 1001 32 53
// rakib 1 E 1002 93 97
// sakib 8 M 1003 34 88
// bokib 3 Q 1004 93 58
// jessica 4 F 1005 94 88
// noname 8 R 1006 17 61

//English mar boro theke choto
//ar soman hoile math mark boro theke choto
#include<bits/stdc++.h>
using namespace std;
class student
{   public:
    string nm;
    int cls;
    char s;
    int id;
    int mathM;
    int engM;
    
};
bool cmp(student l,student r)
{
  if(l.engM==r.engM)
  {
    
    if(l.mathM==r.mathM){
        return l.id<r.id;
    }
    else{
        return l.mathM>r.mathM;
    }
  }
  else{
    return l.engM>r.engM;
  }
}
int main()
{
    int n;
    cin>>n;
    student ar[n];
    for(int i=0;i<n;i++)
    {
       cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id>>ar[i].mathM>>ar[i].engM;
         
    }

    sort(ar,ar+n,cmp);

    for(int i=0;i<n;i++)
    {
       cout<<ar[i].nm<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].id<<" "<<ar[i].mathM<<" "<<ar[i].engM<<endl;
         
    }
    
      
    return 0;
}
