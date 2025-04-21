#include<iostream>
using namespace std;
int main()
{
   char str[100];
    //cin>>str;     //-space chara hoile
   
    cin.ignore();
    cin.getline(str,100);
    //fgets(str,sizeof(str),stdin);

    cout<<str;

    return 0;
}

// //advance way
// #include<iostream>
// using namespace std;
// #include<algorithm>
// int main()
// {
// string str;
// cin>>str;
//     cout<<str;

//     return 0;
// }