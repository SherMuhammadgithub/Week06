#include <iostream>
using namespace std;
void add(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void dv(int num1, int num2);
main()
{
    int no1, no2;
    char op;
    cout << "Enter 1st number: ";
    cin >> no1;
    cout << "Enter 2nd number: ";
    cin >> no2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    if (op == '+')
    {
        add(no1, no2);
    }
    if (op == '-')
    {
        sub(no1, no2);
    }
    if (op == '*')
    {
        mul(no1, no2);
    }
    if (op == '/')
    {
        dv(no1, no2);
    }

} // namespace sdt;
void add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    cout << "Addition: " << sum;
}
void sub(int num1, int num2)
{
    int sub;
    sub = num1 - num2;
    cout << "Subtraction: " << sub;
}
void mul(int num1, int num2)
{
    int mul;
    mul = num1 * num2;
    cout << "Multiplication: " << mul;
}
void dv(int num1, int num2)
{
    int dv;
    dv = num1 / num2;
    cout << "Division: " << dv;
}