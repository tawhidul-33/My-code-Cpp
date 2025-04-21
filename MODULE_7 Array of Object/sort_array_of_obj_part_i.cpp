// 3
// siyam molla
// 33 90
// rakib ahmed
// 34 87
// akib hosen
// 39 80

//sorting choto theke boro with mark
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
 if(l.mark<r.mark)
 {
    return true;
 }
 else{
    return false;
 }
//or sortcurt way
//return l.mark<r.mark;
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
/*
//sorting boro theke choto with mark
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
 if(l.mark>r.mark)
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
*/