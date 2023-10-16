#include <iostream>
using namespace std;
void pet(int holidays);
main()
{
    int _holidays;
    cout << "Holidays: ";
    cin >> _holidays;
    pet(_holidays);

} // namespace std;
void pet(int holidays)
{
    int wrokDays, gameTimes, diffNorm, hourHold, mintHold;
    wrokDays = 365 - holidays;
    gameTimes = (wrokDays * 63) + (holidays * 127);
    diffNorm = 30000 - gameTimes;
    hourHold = diffNorm / 60;
    mintHold = diffNorm - (hourHold * 60);
    if (diffNorm <= 0)
    {
        cout << "Tom will run away" << endl;
        cout << "" << abs(hourHold) << " hours and " << abs(mintHold) << " minutes for play";
    }
    else
    {
        cout << "Tom sleeps well" << endl;
        cout << "" << hourHold << " hours and " << mintHold << " minutes less for play";
    }
}
// 12915