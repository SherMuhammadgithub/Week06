#include <iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
    int _speed;
    cout << "Speed: ";
    cin >> _speed;
    checkSpeed(_speed);
} // namespace std;
void checkSpeed(int speed)
{
    if (speed > 100)
    {
        cout << "Halt... YOU WILL BE CHALLENGED!!!";
    }
    else
    {
        cout << "Perfect! You're going good.";
    }
}
