#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;
    student(int cls,int roll,double gpa)
    {
       this->cls=cls;//this-> or (*this)
        this->roll=roll;
        this->gpa=gpa;
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