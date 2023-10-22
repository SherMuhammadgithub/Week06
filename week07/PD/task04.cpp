
#include <iostream>
using namespace std;
void primorial(int);
main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;
    // int result = primorial(num);
    // cout << result;
    primorial(num);

} // namespace std;
void primorial(int num)
{
    // int product = 1;
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
            cout <<j<<endl;
        }
        
    // }
    // if (flag == 1)
    // {
    //     // cout << "Prime" << endl;
    //     // return true;
    // }
    // else
    // {
    //     // cout << "Not Prime";
    //     // return false;
    // }
    // // return product;
}
}
