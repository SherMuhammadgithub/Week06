#include <iostream>
using namespace std;
void dis_sun(float price);
void dis_every_day(float price);
main()
{
    float purcahseAmout;
    string day, forceStop;

   

    while (true)
    {
        cout << "Enter the day you want to do Shopping: ";
        cin >> day;
        cout << "Enter the Purchaseable amount: ";
        cin >> purcahseAmout;

        if (day == "Sunday" )
        {
            dis_sun(purcahseAmout);
        }
        else
        {
            dis_every_day(purcahseAmout);
        }
        cout << "" << endl;
    }

}
void dis_sun(float price)
{
    float disPrice, disOnSun = 10, payable;
    disPrice = (price * disOnSun) / 100;
    payable = price - disPrice;
    cout << "Payable amount will be: " << payable;
}
void dis_every_day(float price)
{
    float disPrice, disOnday = 5, payble;
    disPrice = (price * disOnday) / 100;
    payble = price - disPrice;
    cout << "Payable amount will be: " << payble;
}