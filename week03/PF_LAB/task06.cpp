#include <iostream>
using namespace std;
main()
{

    double Bits, MBB;
    cout << "Enter the size in megabytes (MB): ";
    cin >> MBB;
    Bits = MBB * 1024 * 1024 * 8;
    cout << MBB << " MB is equivalent to " << Bits<<" bits.";

} // namespace std;
