#include <iostream>
using namespace std;
main()
{
    int roll;
    float aggre;
    char section;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your roll number: ";
    cin >> roll;
    cout << "Enter your aggregate: ";
    cin >> aggre;
    cout << "Enter your Section: ";
    cin >> section;
    cout << "Student Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Aggregate: " << aggre << endl;
    cout << "Section: " << section << endl;
}