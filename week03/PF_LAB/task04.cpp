#include <iostream>
using namespace std;
main()
{
    float Charge, Time;
    float Current;
    cout << "Enter the charge (Q) in Coulombs: ";
    cin >> Charge;
    cout << "Enter the time (t) in seconds: ";
    cin >> Time;
    Current = Charge / Time;
    cout << "The current (I) is: " << Current << " Amperes";

} // namespace std;
