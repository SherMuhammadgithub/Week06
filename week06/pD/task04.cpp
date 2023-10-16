#include <iostream>
using namespace std;
float priceCal(float, char, char);
main()
{
    string serviceType;
    float mints;
    char serviceCode, time;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    if (serviceCode == 'P' || serviceCode == 'p')
    {

        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }

    cout << "Enter the number of minutes used: ";
    cin >> mints;
    float due = priceCal(mints, serviceCode, time);
    if (serviceCode == 'p' || serviceCode == 'P')
    {
        serviceType = "Premium";
    }
    else if (serviceCode == 'r' || serviceCode == 'R')
    {
        serviceType = "Regular";
    }
    else
    {
        serviceType = "Invalid";
    }

    cout << "Service Type: " << serviceType << endl;
    cout << "Total Minutes Used: " << mints << " minutes" << endl;
    cout << "Amount Due: $" << due;
}
float priceCal(float mint, char serviCode, char time)
{
    float dueAmount;
    if (serviCode == 'R' || serviCode == 'r')
    {
        if (mint <= 50)
        {
            dueAmount = 0.10;
        }
        else
        {
            dueAmount = (0.20 * mint); // check
        }
    }
    if (serviCode == 'p' || serviCode == 'P')

    {
        if (mint <= 75 && time == 'd')
        {
            dueAmount = 25.00f;
            if (mint > 75)
            {
                dueAmount = dueAmount + (0.10 * mint); // check
            }
        }
        if (mint <= 100 && (time == 'n' || time == 'N'))
        {
            dueAmount = 25.00f;
            if (mint > 100)
            {
                dueAmount = dueAmount + (0.05 * mint); // check
            }
        }
    }

    return dueAmount;
}