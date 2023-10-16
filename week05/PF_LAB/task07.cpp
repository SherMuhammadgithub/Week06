#include <iostream>
#include <cmath>
void IsSymmetrical(int num);

using namespace std;
main()
{

    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    IsSymmetrical(num);
   
}
 void IsSymmetrical(int num)
 { 
    int number = num;
    int reverse = 0;
    while (num > 0)
    {
        reverse = reverse*10 + num%10;
        num /= 10;
    }
    
     if (reverse == number)
    {
        cout << "The number is symmetrical.";
    }
    else
    {
        cout << "The number is not symmetrical.";
    }

    }

