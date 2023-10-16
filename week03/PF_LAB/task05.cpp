#include <iostream>
using namespace std;
main()
{
    string name;
    float Matric, Inter, Ecat;
    float Aggregate, matric, inter, ecat;
    cout << "Enter the student's name: ";
    cin >> name;
    cout << "Enter matriculation marks (out of 1100): ";
    cin >> Matric;
    cout << "Enter intermediate marks (out of 550): ";
    cin >> Inter;
    cout << "Enter Ecat marks (out of 400): ";
    cin >> Ecat;
    matric = Matric / 1100 * 10;
    inter = Inter / 550 * 40;
    ecat = Ecat / 400 * 50;
    Aggregate = matric + inter + ecat;
    cout << "Aggregate score for " << name << " in UET is: " << Aggregate<<"%";

} // namespace std;
