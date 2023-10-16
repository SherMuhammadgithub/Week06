#include <iostream>
using namespace std;
void age_check(int age);
main()
{
    int person_age;
    cout << "Enter your age: ";
    cin >> person_age;
    age_check(person_age);
}
void age_check(int age)
{
    if (age >= 18)
    {
        cout << "You are eligible to vote.";
    }
    else
    {
        cout << "You are not eligible to vote.";
    }
}
