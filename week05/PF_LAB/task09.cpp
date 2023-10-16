#include <iostream>
#include <cmath>
void  timeTravel(int hour, int mint);
using namespace std;
main()
{
   int hour,  mint;
   cout<<"Enter Hours: "; 
   cin>>hour;
   cout<<"Enter Minutes: ";
   cin>>mint;
   timeTravel(hour, mint);
}
void timeTravel(int hour, int mint){
    mint = mint +15 ;
    if(mint > 59 ){
        mint = mint - 60;
        hour += 1;

    }
    if (hour == 24)
    {
        hour = 0;
    }
    
    
    cout<<hour<<":"<<mint;


}