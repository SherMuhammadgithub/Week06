#include <iostream>
#include <string>
#include<cmath>
using namespace std;
float calPd(string, int, int);
main()

{
    string year;
    float holidays, weekends;
    cout << "Enter year type: ";
    cin >> year;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> weekends;
    float result = calPd(year, holidays, weekends);
    cout<<""<<result; 
}
float calPd(string year, int holidays, int weekendstoHometown)
{
    float totalPlayingInSofia, playingOtherdays, playingInHomeTown;
    float finalPlaying;
    int weekendsOfYear = 48;
    float per;
    float finalPlyaingForLeapYear;
    totalPlayingInSofia = weekendsOfYear*3/4 ; //36
       playingOtherdays = (holidays*2/3);

    if (year == "normal")
    {
       
       finalPlaying = playingOtherdays + totalPlayingInSofia ;
        return round(finalPlaying);
    }
    else
    {
      
       finalPlaying = playingOtherdays + totalPlayingInSofia ;
       per = finalPlaying * 0.15f;
       finalPlyaingForLeapYear = (finalPlaying + per);
       return round(finalPlyaingForLeapYear);

    }

    //Roundoff is remaining 
 


    

}