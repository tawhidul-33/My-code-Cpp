/*
5
10 20 40 30 50
*/
#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int *ar=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    } 
    sort(ar,ar+n,greater<int>());//descending
    return ar;
}
int main()
{
    int n;
    cin>>n;

    int*ar=sort_it(n);
    
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}