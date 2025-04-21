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
student* fun()
{
   student siyam(10,33,4.5);
   student*p=&siyam;
   return p; 
}
int main()
{
  student *obj=fun();


   cout<<(*obj).cls<<" "<<obj->roll<<" "<<obj->gpa<<endl;

    return 0;
}
//Gurbej valu asbe karon amra address akare return kortechi
//tai amader daynamic object lagbe ===
// Daynamic obcject.cpp te right ta ace