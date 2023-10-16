#include <iostream>
using namespace std;
main()
{
    int wins, draws, losses, Points;
    string team;
    cout << "Enter the name of the cricket team: ";
    cin >> team;
    cout << "Enter the number of wins: ";
    cin >> wins;
    cout << "Enter the number of draws: ";
    cin >> draws;
    cout << "Enter the number of losses: ";
    cin >> losses;
    Points = (wins * 3) + (losses * 0) + (draws * 1);
    cout << team << " has obtained " << Points << " points in the Asia Cup tournament.";

} // namespace std;
