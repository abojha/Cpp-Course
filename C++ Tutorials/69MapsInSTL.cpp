#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
//Map is an associative array
    map<string, int> mapmarks;
    mapmarks["abhay"] = 32;
    mapmarks["anjali"] = 35;
    mapmarks["mintu"] = 40;

    map<string, int> :: iterator iter;
    for(iter = mapmarks.begin(); iter!= mapmarks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    return 0;
}