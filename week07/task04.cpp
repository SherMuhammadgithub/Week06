#include<iostream>
using namespace std;
int frequency(int, int);
main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << "Enter the digit to check: ";
    int digit;
    cin >> digit;
    int result;
    result = frequency(num, digit);
    cout << "Frequency: "<<result;    
}
int frequency(int num, int digit)
{
    
    int frequency;
    int numHolder;
    for(frequency = 0; num != 0 ;)
    {
        numHolder = num % 10;
        num /= 10;
        if (numHolder == digit)
        {
            frequency += 1;
        }
        

        
        

    }
    return frequency;

}