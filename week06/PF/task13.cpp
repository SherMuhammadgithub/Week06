#include <iostream>
using namespace std;
float lowestPrice(int, string);
main()
{
    int kilometers;
    string period;
    cout << "Enter the number of kilometers: ";
    cin >> kilometers;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;
    float result = lowestPrice(kilometers, period);
    cout << "Lowest price for " << kilometers << " kilometers: " << result << " EUR";
}

float lowestPrice(int kilometers, string period)
{
    if (kilometers < 20)
    {
        if (period == "day")
        {
            return (kilometers * 0.79) + 0.70;
        }
        if (period == "night")
        {
            return (kilometers * 0.90) + 0.70;
        }
    }
    if (kilometers >= 20 && kilometers < 100)
    {
        return kilometers * 0.09;
    }
    if (kilometers >= 100)
    {
        return kilometers * 0.06;
    }
}

    
    
   
    
    

    
    

    
