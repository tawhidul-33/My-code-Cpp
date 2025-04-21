#include<bits/stdc++.h>
using namespace std;
int *fun(int x)
{
    int *arr=new int[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    return arr;

}

int main()
{
    int x;
    cin>>x;
    int *ar=fun(x);
    for(int i=0;i<x;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}