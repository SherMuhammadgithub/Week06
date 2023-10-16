#include <iostream>
using namespace std;
main()
{
    float I, V, P;
    cout << "Enter voltage (in volts): ";
    cin >> V;
    cout << "Enter current (in amperes): ";
    cin >> I;
    P = V * I;
    cout << "The power is " << P << " watts.";

} // namespace std;
