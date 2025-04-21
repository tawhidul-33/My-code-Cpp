#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
  int roll;
  string name;
  int englisg;
  int math;

  student(int roll,string name,int english,int math )
  {
    this->roll=roll;
    this->name=name;
    this->englisg=english;
    this->math=math;
  }
  void ti()
  {
    cout<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Reg:"<<15021987<<endl;
    cout<<"Total Mark: "<<englisg+math<<" Out of 200"<<endl;
  }
};
int main()
{
    student s(648433,"Siyam",95,90);
    s.ti();

    student r(648426,"Ruhul",90,90);
    r.ti();

    return 0;
}