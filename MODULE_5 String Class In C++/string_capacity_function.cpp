
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="siyam molla";
 cout<<s<<endl;
 
 cout<<s.size()<<endl;

 cout<<s.max_size()<<endl;

 cout<<s.capacity()<<endl;

 s.clear();

 if(s.empty()==true)
 {
    cout<<"empty";
 }
 else{
    cout<<"Not empty";
 }
    return 0;
}

/*
//Resize 
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="TI siyam molla";
 s.resize(8);
 cout<<s<<endl;

 s.resize(20,'x');
 cout<<s<<endl;

  return 0;
}
*/