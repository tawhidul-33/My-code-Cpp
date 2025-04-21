/*
#include<bits/stdc++.h>
using namespace std;
class student
{  public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{ student a;
    char tmp[100]="siyam";
    strcpy(a.name,tmp);
    a.roll=648433;
    a.gpa=3.50;
    cout<<a.name<<" "<<a.roll<<" "<<fixed <<setprecision(2) <<a.gpa<<endl;

    return 0;
}
*/
// input niye
// siyam molla
// 648433 4.50
// Ruhul amin
// 648433 4.10
#include<bits/stdc++.h>
using namespace std;
class student
{  public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{ student siyam,ruhul;
  cin.getline(siyam.name,100); 
  cin>>siyam.roll>>siyam.gpa;

  cin.ignore();
 
  cin.getline(ruhul.name,100);
  cin>>ruhul.roll>>ruhul.gpa;

  cout<<siyam.name<<" "<<siyam.roll<<" "<<fixed <<setprecision(2) <<siyam.gpa<<endl;
  cout<<ruhul.name<<" "<<ruhul.roll<<" "<<fixed <<setprecision(2) <<ruhul.gpa<<endl;
  
    return 0;
}