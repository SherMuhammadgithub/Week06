#include <iostream>
using namespace std;
float calPrice(string, string, float);
main()
{
    string friut, day;
    float qty;
    cout << "Enter the fruit name: ";
    cin >> friut;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> qty;
    if ((day == "Sunday" || day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday"))
    {
        float result = calPrice(friut, day, qty);
        cout << result;
    }
    else{
        cout<<"error";
    }
}
float calPrice(string fruit, string day, float qty)
{
    float Price;
    if (day == "Sunday" || day == "sunday")

    {
        if (fruit == "banana")
        {
            Price = 2.70 * qty;
        }
        else if (fruit == "apple")
        {
            Price = 1.25 * qty;
        }
        else if (fruit == "orange")
        {
            Price = 0.90 * qty;
        }
        else if (fruit == "grapefruit")
        {
            Price = 1.60 * qty;
        }
        else if (fruit == "kiwi")
        {
            Price = 3.00 * qty;
        }
        else if (fruit == "pineapple")
        {
            Price = 5.60 * qty;
        }
        else if (fruit == "grapes")
        {
            Price = 4.20 * qty;
        }
    }
    else if (day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday")
    {

        if (fruit == "banana")
        {
            Price = 2.50 * qty;
        }
        else if (fruit == "apple")
        {
            Price = 1.20 * qty;
        }
        else if (fruit == "orange")
        {
            Price = 0.85 * qty;
        }
        else if (fruit == "grapefruit")
        {
            Price = 1.45 * qty;
        }
        else if (fruit == "kiwi")
        {
            Price = 2.70 * qty;
        }
        else if (fruit == "pineapple")
        {
            Price = 5.50 * qty;
        }
        else if (fruit == "grapes")
        {
            Price = 3.85 * qty;
        }
    }
    else
    {
        cout << "error";
    }
    return Price;
}