// 5
// Asif 29 95
// Sakib 55 89
// Zubair 57 93
// Ahsan 39 86
// Joy 12 99

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

for(int i=0,j=n-1;i<j;i++,j--)
{
    student tmp=ar[i];
    ar[i]=ar[j];
    ar[j]=tmp;
    //or,
    //swap(ar[i],ar[j]);
}
  

  for(int i=0;i<n;i++)
  {
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].mark<<endl;
  }
     
    return 0;
}

/*
//reverse with reverse function
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

  reverse(ar,ar+n);

  for(int i=0;i<n;i++)
  {
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].mark<<endl;
  }
     
    return 0;
}
*/