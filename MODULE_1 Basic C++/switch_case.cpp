#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    switch (day)
    {
        case 1:
        cout<<"Saturday";
         break;

        case 2:
        cout<<"sunday";
        break;
  
        case 3:
        cout<<"monday";
        break;

        case 4:
        cout<<"tuesday";
        break;
         
        case 5:
        cout<<"wednesday";
        break;

        case 6:
        cout<<"thursday";
        break;

        case 7:
        cout<<"friday";
        break;

        default:
        cout<<"wrong input";
    }
  return 0;
}

/*
// Even_Odd_With_Switch
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch (x%2)
    {
        case 0:
        cout<<"Even";
         break;

        case 1:
        cout<<"Odd";
        break;
    }
  return 0;
}


//Vowel_Or_Consonent
#include<iostream>
using namespace std;
int main()
{
  char c;;
    cin>>c;
    switch (c)
    {
        case 'a':
        cout<<"Vowel";
         break;

        case 'e':
        cout<<"Vowel";
        break;
  
        case 'i':
        cout<<"Vowel";
        break;

        case 'o':
        cout<<"Vowel";
        break;
         
        case 'u':
        cout<<"Vowel";
        break;


        default:
        cout<<"Consonent";
        break;
    }
  return 0;
}*/