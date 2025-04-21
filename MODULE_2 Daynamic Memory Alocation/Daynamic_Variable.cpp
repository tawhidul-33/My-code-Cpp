/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;//-stack memory te static variable digleare
    cin>>x;//x=10;
    cout<<x<<endl;

    int *p=new int;//-Heap memoryte Daynamic Variable digleare
    cin>>*p;//*p=100;
    cout<<*p;
    return 0;
}

//-Stack Memory 
#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x=10;//static variable
    p=&x;
    cout<<"fun->"<<*p<<endl;
    return ;
}
int main()
{
fun();
cout<<"Main->"<<*p<<endl;//stack memory return er valu 0 hoye jay
    return 0;
}
*/

//-Heap Memory
#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x=new int;//Daynamic variable
    *x=10;
    p=x;
    cout<<"fun->"<<*p<<endl;
    return ;
}
int main()
{
fun();
cout<<"Main->"<<*p<<endl;//Heap memory return er valu 0 hoye na 
    return 0;
}