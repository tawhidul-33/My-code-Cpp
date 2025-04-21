// 5
// 213132
// 973894
// 045207
// 000000
// 055776
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ticket;
        cin>>ticket;
        

    int sum1=(ticket[0]-'0')+(ticket[1]-'0')+(ticket[2]-'0');
    int sum2=(ticket[3]-'0')+(ticket[4]-'0')+(ticket[5]-'0');
    if(sum1==sum2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

    return 0;
}
// //or
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;

//        int ar[6];
//        for(int i=0;i<6;i++)
//        {
//          //charecter theke digit akare Array te dukaytechi
//           ar[i]=s[i]-'0';
//        }
    
//     int sum1=ar[0]+ar[1]+ar[2];
//     int sum2=ar[3]+ar[4]+ar[5];
//     if(sum1==sum2)
//     {
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     }

//     return 0;
// }