#include<bits/stdc++.h>
using namespace std;
class cricketer
{   public:
    string country;
    int jersey;

    cricketer(string country,int jersey)
    {
        this->country=country;
        this->jersey=jersey;
    }

};


int main()
{
    cricketer* tamim=new cricketer("Bangladesh",99);
    cricketer* sakib=new cricketer("Bangladesh",75);

    //copy
    *tamim=*sakib;
    //or
    // tamim->country=sakib->country;
    // tamim->jersey=sakib->jersey;


    delete sakib;
    
    cout<<tamim->country<<" "<<tamim->jersey<<endl;
    
    
    return 0;
}
