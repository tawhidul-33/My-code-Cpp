// 4
// siyam molla
// 39 90
// rakib ahmed
// 34 87
// akib hosen
// 33 90
// sakib shek
// 45 89 

//sorting boro theke choto with Mark  
//if Mark soman hoy tahole Roll choto theke boro
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
   else if(l.mark<r.mark)
   {
      return false;
   }
   else
   {
      if(l.roll<r.roll)
      {
         return true;
      }
      else
      {
       return false;
      }
   }

// or, sortcurt way
//    if(l.mark==r.mark)
//    {
//       return l.roll<r.roll;
//    }
//    else
//    {
//      return l.mark>r.mark ;
//    }

// or sortcut way with use ternery oparetor
// return l.mark==r.mark? l.roll<r.roll:l.mark>r.mark;
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