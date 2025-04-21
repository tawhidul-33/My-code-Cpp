// 3
// siyam molla
// 34 90
// rakib ahmed
// 33 87
// akib hosen
// 39 80 

//sorting choto theke boro with Roll
#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
  string name;
  int roll;
  int mark;

  
};

//custom compare function for sort
bool cmp(student l,student r) 
{
 if(l.roll<r.roll)
 {
    return true;
 }
 else{
    return false;
 }
}

int main()
{
  int n;
  cin>>n;
  student ar[n];
  for(int i=0;i<n;i++)
  {
    cin.ignore();
    getline(cin,ar[i].name);
    cin>>ar[i].roll>>ar[i].mark;
  }

  sort(ar,ar+n,cmp);

  for(int i=0;i<n;i++)
  {
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].mark<<endl;
  }
     
    return 0;
}