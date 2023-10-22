#include <iostream>
using namespace std;
int totalDigits(int);
main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int result = totalDigits(num);
    cout << "Total number of digits: " << result;
}
int totalDigits(int num)
{
    int numOfDigits = 0;
    int numHolder;
    if (num == 0)
    {
        numOfDigits = numOfDigits + 1;
    }
    else
    {
        for (numOfDigits = 0; num != 0;)
        {
            numHolder = num % 10;
            num /= 10;
            numOfDigits++;
        }
    }

    return numOfDigits;
}