// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     int flag=1;
//     for(int i=0,j=s.size()-1;i<j;i++,j--)
//     {
//        if(s[i]!=s[j])
//        {
//         flag=0;
//         break;

//        }
//        if(flag==0){break;}
//     }
//     flag==1?cout<<"YES":cout<<"NO";
//     return 0;
// }

// or
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string reverse_of_s=s;
    reverse(reverse_of_s.begin(),reverse_of_s.end());
    
    s==reverse_of_s?cout<<"YES":cout<<"NO";
     
    
    return 0;
}