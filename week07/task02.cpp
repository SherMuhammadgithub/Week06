#include <iostream>
using namespace std;
void generalSeries(int series);
main()
{
    cout << "Enter the length of the Fibonacci series: ";
    int series;
    cin >> series;
    generalSeries(series);
}
void generalSeries(int series)
{
    int num;
    int sum = 0;
    int prevDigit;
    int nextDigit = 0;
    for (num = 0; series >= num; num++)
    {
        prevDigit = num;
        if (num == 1)
        {
            sum = prevDigit + nextDigit;
        }
        nextDigit = num;
        cout << sum;
    }
}
// num1 + num2
// 0       1    =     1