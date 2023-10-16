#include <iostream>
using namespace std;
void convertor(float inch);
main()
{
	float _inch;
   cout<<"Enter the measurement in inches: ";
	cin>>_inch;
    convertor(_inch);

}
void convertor(float inch)
{
   float feet;
    feet = inch/ 12;
    cout << "Equivalent in feet: " << feet;
}
