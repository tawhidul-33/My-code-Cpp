// 5
// Munna 8 D 25 50 30
// Shojoy 9 E 26 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99

//total mark onujayi boro theke choto
// ar total mar soman hile id choto theke boro onujayi sajate hobe
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
    int tlm;
};
bool cmp(student l,student r)
{
  if(l.tlm==r.tlm)
  {
    return l.id<r.id;
  }
  else{
    return l.tlm>r.tlm;
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
    //total mark 
    for(int i=0;i<n;i++)
    {
        ar[i].tlm=ar[i].mathM+ar[i].engM;
    }

    sort(ar,ar+n,cmp);

    for(int i=0;i<n;i++)
    {
       cout<<ar[i].nm<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].id<<" "<<ar[i].mathM<<" "<<ar[i].engM<<endl;
         
    }
    
      
    return 0;
}
