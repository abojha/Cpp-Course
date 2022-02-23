#include<iostream>
#include<unistd.h>
#include<ctime>
using namespace std;

int main()
{
    time_t now = time(NULL);



// number of sec since Jan 1, 1970 midnight
    cout<<now<<endl;
    // sleep(2);
    // time_t two_secs = time(NULL);
    // cout<<two_secs<<endl;

    // double diff = difftime(two_secs, now);
    // cout<<diff<<endl;

    char *string_now = ctime(&now);
    cout<<string_now<<endl;



///////////////////////////////////////// GMT Time /////////////////////////////
    // struct tm *gm_time = gmtime(&now);


    // cout<<gm_time->tm_sec<<endl;
    // cout<<gm_time->tm_min<<endl;
    // cout<<gm_time->tm_hour<<endl;
    // cout<<gm_time->tm_mday<<endl;
    // cout<<gm_time->tm_mon<<endl;
    // cout<<gm_time->tm_year<<endl;
    // cout<<gm_time->tm_wday<<endl;
    // cout<<gm_time->tm_yday<<endl;
    // cout<<gm_time->tm_isdst<<endl;

    struct tm *gm_time = localtime(&now);


    cout<<gm_time->tm_sec<<endl;
    cout<<gm_time->tm_min<<endl;
    cout<<gm_time->tm_hour<<endl;
    cout<<gm_time->tm_mday<<endl;
    cout<<gm_time->tm_mon<<endl;
    cout<<gm_time->tm_year<<endl;
    cout<<gm_time->tm_wday<<endl;
    cout<<gm_time->tm_yday<<endl;
    cout<<gm_time->tm_isdst<<endl;

    return 0;
}