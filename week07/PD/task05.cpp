#include <iostream>
#include <string>
using namespace std;
string patients(int, int);
main()
{
    int hospital;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> hospital;
    int numOfPeople;
    string result = patients(hospital, numOfPeople);
    cout << result;

} // namespace  std;
string patients(int hospital, int numOfPeople)
{
    int treated = 0;
    int notTreated = 0;
    for (int i = 1; i <= hospital; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> numOfPeople;

        if (numOfPeople >= 7 && i % 4 != 0)
        {
            treated += 7;
            notTreated = 0;
        }
        else if (numOfPeople < 7 && i % 4 != 0)
        {
            treated += numOfPeople;
            notTreated = treated - numOfPeople;
        }
        if (numOfPeople >= 7 && i % 4 == 0)
        {
            treated += 8;
            notTreated = numOfPeople - treated;
        }
        else if (numOfPeople < 7 && i % 4 == 0)
        {
            treated += numOfPeople + 1;
            notTreated = treated - (numOfPeople + 1);
        }
    }
    return "Treated Patients: " + to_string(treated) + "\nUntreated Patients: " + to_string(notTreated);
}
