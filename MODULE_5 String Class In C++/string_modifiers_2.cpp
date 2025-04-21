#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    
    string s="Hello World ";
    s.assign("Tawhidul");//or,, s="siyam";
    cout<<s<<endl;

    //earase function
    string s2="I'm Siyam";
    s2.erase(2);//erase a diya index theke ses obdi delete korbe
    cout<<s2<<endl;

    //erase a diya first index(1) theke last index(5) obdi delete korbe
    string s3="Bangladesh";
    s3.erase(1,5);
    cout<<s3<<endl;

    //replace function
    //8 indx er por new string bosy,,0 index mane kno index delete kore na
    string s4= "Tawhidul Siyam Molla";
    s4.replace(8,0," Islam");
    cout<<s4<<endl;

    // 8 indx theke suru 19 obdi delete kore then new string bosy
    s4.replace(8,19," Islam");
    cout<<s4<<endl;

    //insert function
    string s5="i Bangladesh";
    s5.insert(1," Love");
    cout<<s5<<endl;
    
    return 0;

}