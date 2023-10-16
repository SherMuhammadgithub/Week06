#include<iostream>
using namespace std;
string decideActivity(string temp, string humiduty);
main()
{
    cout<<"Enter temperature (warm or cold): ";
    string temp;
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    string humid;
    cin>>humid;
    string result = decideActivity(temp, humid);
    cout<<"Recommended activity: "<<result;
}
string decideActivity(string temp, string humiduty){
    if (temp == "warm" && humiduty == "dry"){
        return "Play tennis";
    }
   else if (temp == "warm" && humiduty == "humid"){
    return "Swim";
   }
   else if (temp == "cold" && humiduty == "dry")
   {
    return "Play basketball";
   }
   else{
    return "Watch TV";
   }
   

   
    
}


