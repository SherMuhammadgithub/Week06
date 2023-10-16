#include <iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
{
    int _people, _tp;
    cout << "Number of people in the household: ";
    cin >> _people;
    cout << "Number of rolls of TP: ";
    cin >> _tp;
    tpChecker(_people, _tp);
} // namespace std;
void tpChecker(int people, int tp)
{
    int remDays;
    remDays = (tp * 500) / (people * 57);
    if (remDays < 14)
    {

        cout << "Your TP will only last " << remDays << " days, buy more!";
    }
    else
    {
        cout << "Your TP will last " << remDays << " days, no need to panic!";
    }
}
