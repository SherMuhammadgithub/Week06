#include <iostream>
#include <cmath>
using namespace std;
string calculateMoney(int, int, int);
main()
{
    cout << "Enter Lilly's age: ";
    int age;
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    int price;
    cin >> price;
    cout << "Enter the unit price of each toy: ";
    int unitPrice;
    cin >> unitPrice;
    string result = calculateMoney(age, price, unitPrice);
    cout << result;
}
string calculateMoney(int age, int price, int unitPrice)
{
    int birthdays;
    int moneyReceivedOnBirthday = 0;
    float moneyIncraesing = 10.00;
    int savingAmount = 0;
    int numebrOfToys = 0;
    int toysTotalPrice = 0;
    int totalSavingAmount = 0;
    int remPrice = 0;
    for (birthdays = 1; birthdays <= age; birthdays++)
    {
        if (birthdays % 2 == 0)
        {
            moneyReceivedOnBirthday = moneyReceivedOnBirthday + moneyIncraesing;
            moneyIncraesing += 10.00;
            moneyReceivedOnBirthday -= 1.00; // the money that her brother has taken
        }
        if (birthdays % 2 == 1)
        {
            numebrOfToys += 1;
        }
    }
    toysTotalPrice = unitPrice * numebrOfToys;
    totalSavingAmount = toysTotalPrice + moneyReceivedOnBirthday;
    if (totalSavingAmount > price)
    {
        remPrice = totalSavingAmount - price; // which is amount left after purchasing the machine
        return "Yes!\n" + to_string(remPrice);
    }
    if (totalSavingAmount < price)
    {
        remPrice = (price - totalSavingAmount);
        return "No!\n" + to_string(remPrice);
    }
}
