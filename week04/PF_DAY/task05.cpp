#include <iostream>
using namespace std;
void possibleBonus(int pos1, int pos2);
main()
{
    int _pos1, _pos2;
    cout << "Enter your position: ";
    cin >> _pos1;
    cout << "Enter your friend's position: ";
    cin >> _pos2;
    possibleBonus(_pos1, _pos2);

} // namespace std;
void possibleBonus(int pos1, int pos2)
{
    if ((pos1 + 6) < pos2)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}
