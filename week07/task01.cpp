#include <iostream>
using namespace std;
void printTable(int);
main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    printTable(num);
}
void printTable(int num)
{
    int i, result;
    for (i = 1; i <= 10; i++)
    {
        result = num * i;
        cout << num << " X " << i << " = " << result <<endl;
    }
}