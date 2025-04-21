// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     int tmp=x;
//     x=y;
//     y=tmp;
//     cout<<x<<endl<<y;
//     return 0;                              
// }

//Advance way
#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}

