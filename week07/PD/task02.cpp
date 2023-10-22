#include <iostream>
using namespace std;
void triangle(int);
main()
{
    int tri;
    cout << "Enter number of Triangle: ";
    cin >> tri;
    triangle(tri);

} // namespace std;
void triangle(int tri)
{
    int sum = 0;
    for (int i = 1; i <= tri; i++)
    {

        sum = sum + i;
    }
    cout << "Dots in the Triangle: " << sum;
}
