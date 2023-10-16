#include <iostream>
using namespace std;
bool parityAnalysis(int);
main()
{
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;
    int result = parityAnalysis(n);
    cout << result;
}

bool parityAnalysis(int n)
{
    int inputvalue = n;
    int digit1 = n % 10;
    n /= 10;
    int digit2 = n % 10;
    n /= 10;
    int digit3 = n;
    int sum = digit1 + digit2 + digit3;
    if ((sum % 2 == 0 && inputvalue % 2 == 0) || (sum % 2 != 0 && inputvalue %2 !=0))
    {
        return true;
    }
    else
    {
        return false;
    }
}