#include <iostream>
using namespace std;
void amplify(int);
main()
{
    int num;
    cout << "Enter the number to Amplify: ";
    cin >> num;
    amplify(num);
}
void amplify(int num)
{
    int seq = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            seq = i * 10;
            cout << seq << " ,";
        }
        else if(i < num)
        {
            cout << i << ", ";
        }
        else if(num == i){
            cout << i <<" ";
        }
    }
}
