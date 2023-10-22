#include <iostream>
using namespace std;

// Function to calculate GCD (Greatest Common Divisor)
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

// Function to calculate LCM (Least Common Multiple)
int findLCM(int a, int b) {
    // LCM = (a * b) / GCD(a, b)
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
