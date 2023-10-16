#include <iostream>
using namespace std;
main()
{
    int age_years;
    long int age_days;
    cout << "Enter your age in years: ";
    cin >> age_years;
    age_days = age_years * 365;
    cout << "Your age in days is approximately " << age_days << " days.";

} // namespace std;
