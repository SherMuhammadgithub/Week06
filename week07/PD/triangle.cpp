#include <iostream>
using namespace std;
main()
{
    int r, c;
    int r1, c1;
    for (r = 1; r <= 7; r++)
    {
        for (int space = 7; space > r; space--)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "#";
        }
        cout << endl;
    }
    for (r1 = 1; r1 <= 7; r1++)
    {
        for (int space1 = 1; space1 < r1; space1++)
        {
            cout << " ";
        }
        for (c1 = 7; c1 >= r1; c1--)
        {
            cout << "#";
        }
        cout << endl;
    }
} // namespace std;
