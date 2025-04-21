/*
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;
    student(int c,int r,double g)
    {
        cls=c;
        roll=r;
        gpa=g;
    }
};
int main()
{
  student siyam(10,33,4.5);
  student ruhul(10,26,4.6);
  student sakib(9,34,4.3);

  cout<<siyam.cls<<" "<<siyam.roll<<" "<<siyam.gpa<<endl;
   cout<<ruhul.cls<<" "<<ruhul.roll<<" "<<ruhul.gpa<<endl; 
    cout<<sakib.cls<<" "<<sakib.roll<<" "<<sakib.gpa<<endl;  
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;
    student(int c,int r,double g)
    {
        cls=c;
        roll=r;
        gpa=g;
    }
};
int main()
{
    int rl;
    int cl;
    double gp;
    cin>>cl>>rl>>gp;
  student siyam(cl,rl,gp);
  
  cout<<siyam.cls<<" "<<siyam.roll<<" "<<siyam.gpa<<endl; 
    return 0;
}