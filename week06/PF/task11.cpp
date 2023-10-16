#include <iostream>
using namespace std;
string checkSpeed(float);
main()
{
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    string result = checkSpeed(speed);
    cout<<""<<result;
}
string checkSpeed(float speed)
{
    if (speed == 10)
    {
        return "slow";
    }
    else if (speed > 10 && speed <= 50)
    {
        return "average";
    }
    else if (speed > 50 && speed <= 150)
    {
        return "fast";
    }
    else if (speed > 150 && speed <= 1000)
    {
        return "ultra-fast";
    }
    else{
        return "extremely fast";
    }
    
    
    
}