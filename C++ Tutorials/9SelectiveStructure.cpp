//****************Selection Control Statement********************
//*******************Switch Case***********************************

#include<iostream>
using namespace std;
main()
{
    int day;
    cin>>day;

    switch (day)
    {
    case 1 :
        cout<<"sunday"<<endl;
        break;
    case 2 :
        cout<<"Monday"<<endl;
        break;
    case 3 :
        cout<<"Tuesday"<<endl;
        break;
    case 4 :
        cout<<"wednesday"<<endl;
        break;
    case 5 :
        cout<<"Thursday"<<endl;
        break;
    case 6 :
        cout<<"Friday"<<endl;
        break;
    case 7 :
        cout<<"Saturday"<<endl;
        break;
    
    
    default:
    cout<<"enter correct number"<<endl;
        break;
    }
    
}