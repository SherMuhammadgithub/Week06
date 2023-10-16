#include <iostream>
using namespace std;
void IsDiscount(string name, float price);
main()
{
    float _price;
    string _name;
    cout << "Enter the country's name: ";
    cin >> _name;
    cout << "Enter the ticket price in dollars: $";
    cin >> _price;
    IsDiscount(_name, _price);
}
void IsDiscount(string name, float price)
{   float final_price;
    float disPrice = 0;
    if (name == "Pakistan")
    {
        disPrice = price * 0.05;
      
    }
    if (name == "India")
    {
        disPrice = price * 0.2;
        
    }
    if (name == "Ireland")
    {
        disPrice = price * 0.1;
        
    }
    if (name == "England")
    {
         disPrice = price * 0.3;
        
    }
    if (name == "Canada")
    {
        disPrice = price * 0.45;
        
    }
    final_price = price - disPrice;
      cout << "Final ticket price after discount: $" << final_price;
}
