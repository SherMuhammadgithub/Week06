#include <iostream>
using namespace std;
void cal(int side_length);
main()
{
    int a;
    cal(a);
}
	void cal(int side_length)
{
    int one_length = 6;
    int stciker;
    cout << "Enter the side length of the Rubik's Cube: ";
    cin >> side_length;
    stciker = (side_length * side_length) * one_length;
    cout << "Number of stickers needed: " << stciker;
}
