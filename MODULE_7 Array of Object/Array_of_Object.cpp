/*
// 3
// siyam 33 90
// rakib 34 87
// akib 39 80
#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
  string name;
  int roll;
  int mark;

  
};
int main()
{
  int n;
  cin>>n;
  student ar[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i].name>>ar[i].roll>>ar[i].mark;
  }

  for(int i=0;i<n;i++)
  {
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].mark<<endl;
  }
     
    return 0;
}
*/


// Or,,space thakle name a
// 3
// siyam molla
// 33 90
// rakib ahmed
// 34 87
// akib hosen
// 39 80
#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
  string name;
  int roll;
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
    cin>>ar[i].roll>>ar[i].mark;
  }

  for(int i=0;i<n;i++)
  {
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].mark<<endl;
  }
     
    return 0;
}
