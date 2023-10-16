#include <iostream>
#include <iomanip>
using namespace std;
double calPriceApart(string, int);
double calPriceStudio(string, int);
main()
{
    string month;
    int stays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;
    double aprat, studio;
    aprat = calPriceApart(month, stays);
    studio = calPriceStudio(month, stays);
    cout << "Apartment: " << fixed << setprecision(6) << aprat << "$." << endl;
    cout << "Studio: " << fixed << setprecision(6) << studio << "$.";
}
double calPriceStudio(string month, int stays)
{
    double price;
    double dis;
    if (month == "May" || month == "October")
    {
        if (stays <= 7)
        {
            price = 50 * stays;
            /* code */
        }
        if (stays > 7 && stays <= 14)

        {
            price = 50 * stays;
            dis = (5 * price) / 100;
            price = price - dis;
        }
        if (stays > 14)
        {
            price = 50 * stays;
            dis = (30 * price) / 100;
            price = price - dis;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (stays <= 14)
        {
            price = 75.20 * stays;
            /* code */
        }
        else
        {
            price = 75.20 * stays;
            dis = (20 * price) / 100;
            price = price - dis;
        }
    }
    else if (month == "July" || month == "August")
    {

        price = 76 * stays;
    }
    return price;
}
double calPriceApart(string month, int stays)
{
    double price;
    double dis;
    if (month == "May" || month == "October")
    {
        if (stays <= 14)
        {
            price = 65 * stays;
            /* code */
        }
        else
        {
            price = 65 * stays;
            dis = (10 * price) / 100;
            price = price - dis;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (stays <= 14)
        {
            price = 68.70 * stays;
            /* code */
        }
        else
        {
            price = 68.70 * stays;
            dis = (10 * price) / 100;
            price = price - dis;
        }
    }
    else if (month == "July" || month == "August")
    {
        if (stays < 14)
        {
            price = 77 * stays;
            /* code */
        }
        else
        {
            price = 77 * stays;
            dis = (10 * price) / 100;
            price = price - dis;
        }
    }
    return price;
}