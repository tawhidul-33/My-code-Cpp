/**/
//static array
#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int ar[5];//static memore alocate 
    for(int i=0;i<5;i++)
    { 
        cin>>ar[i];
    }
   
    return ar;
}
int main()
{
int* ar2= fun();
 for(int i=0;i<5;i++)
    { 
        cout<<ar2[i];
    }
    //output sigmenation fault asbe 
    return 0;
}

// //Daynamic Array
// #include<bits/stdc++.h>
// using namespace std;
// int* fun()
// {
//     int *ar=new int[5];//Daynamic memore alocate 
//     for(int i=0;i<5;i++)
//     { 
//         cin>>ar[i];
//     }
   
//     return ar;
// }
// int main()
// {
// int* ar2= fun();
//  for(int i=0;i<5;i++)
//     { 
//         cout<<ar2[i]<<" ";
//     }
    
//     return 0;
// }