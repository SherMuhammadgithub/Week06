#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;

    vector<int> cargo;
    int total_weight = 0;
    int minibus_weight = 0;
    int truck_weight = 0;
    int train_weight = 0;

    for (int i = 1; i <= count; ++i)
    {
        int weight;
        cout << "Enter the tonnage of cargo "<< i << ": ";
        cin >> weight;
        cargo.push_back(weight);
        total_weight += weight;

        if (weight <= 3)
        {
            minibus_weight += weight;
        }
        else if (weight > 3 && weight <= 11)
        {
            truck_weight += weight;
        }
        else
        {
            train_weight += weight;
        }
    }

    // Calculate the average price per ton
    double average_price = (minibus_weight * 200 + truck_weight * 175 + train_weight * 120) / static_cast<double>(total_weight);

    // Calculate percentages
    double minibus_percentage = (minibus_weight / static_cast<double>(total_weight)) * 100.0;
    double truck_percentage = (truck_weight / static_cast<double>(total_weight)) * 100.0;
    double train_percentage = (train_weight / static_cast<double>(total_weight)) * 100.0;

    // Output results
    cout << fixed << setprecision(2);
    cout << average_price << endl;
    cout << minibus_percentage << "%" << endl;
    cout << truck_percentage << "%" << endl;
    cout << train_percentage << "%" << endl;

    return 0;
}
