/*
//input 10 20 30
// Incrase static Array
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int ar[3];
 for(int i=0;i<3;i++)
{
    cin>>ar[i];
}

int br[5];
 for(int i=0;i<3;i++)
{
    br[i]=ar[i];//copy to br[i] from ar[i]
}

br[3]=40;// data insert
br[4]=50;

 for(int i=0;i<5;i++)
{
    cout<<br[i]<<" ";
}
    return 0;
}
*/

// Incrase Daynamic Array
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int *ar=new int[3];
 for(int i=0;i<3;i++)
{
    cin>>ar[i];
}

int *br=new int[5];
 for(int i=0;i<3;i++)
{
    br[i]=ar[i];//copy to br[i] from ar[i]
}
delete[] ar;
br[3]=40;// data insert
br[4]=50;


 for(int i=0;i<5;i++)
{
    cout<<br[i]<<" ";
}
    return 0;
}