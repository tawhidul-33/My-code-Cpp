//monkey
//i love flower
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    //cin>>str;
   while(cin.getline(str,100001))
   {
    int slen = strlen(str);

    char str2[100001];
    int k=0;
    for(int i=0;i<slen;i++)
    {
      if(str[i]!=' '){
        str2[k++]=str[i];
      }
    }
    str2[k]='\0';
    int s2len = strlen(str2);
   
    sort(str2,str2+k);
    
    cout<<str2;
    cout<<endl;
  }
    return 0;
}