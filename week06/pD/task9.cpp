#include <iostream>
#include <string>
using namespace std;

string checkPoint(int height, int xCord, int yCord);

main() {
    int height, xCord, yCord;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> xCord;
    cout << "Enter y coordinate: ";
    cin >> yCord;
    string result = checkPoint(height, xCord, yCord);
    cout << result;
}

string checkPoint(int height, int xCord, int yCord) {
    bool onBorder = (xCord >= 0 && xCord <= 3 * height && (yCord == 0 || yCord == height)) ||
                    (yCord >= 0 && yCord <= 4 * height && (xCord == 0 || xCord == 2 * height)) ||
                    (xCord == height && yCord >= height && yCord <= 3 * height);

    if (onBorder) {
        return "Border";
    } else if (xCord > 0 && xCord < 2 * height && yCord > 0 && yCord < 4 * height) {
        return "Inside";
    } else {
        return "Outside";
    }
}
