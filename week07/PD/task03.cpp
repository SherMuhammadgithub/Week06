
#include <iostream>
using namespace std;
bool isPrime(int);
main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool result = isPrime(num);
    cout << result;

} // namespace std;
bool isPrime(int num)
{
    int flag;
    for (int j = 2; j <= num; j++)
    {

        flag = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        // cout << "Prime" << endl;
        return true;
    }
    else
    {
        // cout << "Not Prime";
        return false;
    }
}
