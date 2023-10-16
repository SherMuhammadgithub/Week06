#include <iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
    int _redRose, _whiteRose, _tulip;
    cout << "Red Rose: ";
    cin >> _redRose;
    cout << "White Rose: ";
    cin >> _whiteRose;
    cout << "Tulips: ";
    cin >> _tulip;
    flowerShop(_redRose, _whiteRose, _tulip);

} // namespace std;
void flowerShop(int redRose, int whiteRose, int tulip)
{
    float OrignalPrice, PriceDis;
    OrignalPrice = (redRose * 2.00f) + (whiteRose * 4.10f) + (tulip * 2.50f);
    cout << "Original Price: $" << OrignalPrice<<endl;
    if (OrignalPrice > 200)
    {
        PriceDis = OrignalPrice - (OrignalPrice * 20) / 100;
        cout << "Price after Discount: $" << PriceDis;
    }
    else
    {
        cout << "No discount applied.";
    }
}
