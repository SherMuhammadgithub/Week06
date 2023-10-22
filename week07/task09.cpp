#include <iostream>
#include <cmath>
using namespace std;

string calculatePrice(int money, int year)
{
    int ivanAge = 18;

    for (int currentYear = 1800; currentYear <= year; currentYear++)
    {
        int yearlyExpense;

        // Determine yearly expenses based on even/odd year
        if (currentYear % 2 == 0)
        {
            yearlyExpense = 12000;
        }
        else
        {
            yearlyExpense = 12000 + 50 * ivanAge;
        }

        // Deduct expenses from Ivan's money
        if (yearlyExpense > 0)
        {
            money -= yearlyExpense;
            /* code */
        }
      

        // Update Ivan's age
        ivanAge++;

        // Check if Ivan runs out of money
        if (money < 0)

        {
            money = money - 12000;
            money*=-1;
            return "He will need " + to_string(money) + " dollars to survive.";
        }
    }

    // If the loop completes, Ivan has enough money until the specified year
    return "Yes! He will live a carefree life and will have " + to_string(money) + " dollars left.";
}

main()
{
    int money, year;

    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;

    string result = calculatePrice(money, year);

    cout << result;
}
