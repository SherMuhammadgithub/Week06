#include <iostream>
using namespace std;
void vehicle(float dis);
main()
{
    int a;
    vehicle(a);
} // namespace std;

void vehicle(float dis)
{
    float fuel;
    cout << "Enter the distance: ";
    cin >> dis;
    fuel = 10 * dis;
    cout << "Fuel needed: " << fuel;
}