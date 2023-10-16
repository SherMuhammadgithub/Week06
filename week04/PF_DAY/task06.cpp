#include <iostream>
using namespace std;
void longestTime(int hour, int mint);
main()
{
    int _hour, _mint;
    cout << "Enter the number of hours: ";
    cin >> _hour;
    cout << "Enter the number of minutes: ";
    cin >> _mint;
    longestTime(_hour, _mint);

} // namespace std;
void longestTime(int hour, int mint)
{
    if ((hour * 60) > mint)
    {
        cout << "" << hour;
    }
    else
    {
        cout << "" << mint;
    }
}
