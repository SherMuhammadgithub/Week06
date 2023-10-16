#include <iostream>
#include <string>
using namespace std;
string timeCal(int, int, int, int);

main()
{
    int hour, mint, studentArrivalmint, studentArrivalhour;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> hour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> mint;
    cout << "Enter Student hour of arrival: ";
    cin >> studentArrivalhour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentArrivalmint;
    if (hour > studentArrivalhour)
    {
        cout << "Early" << endl;
    }
    else if (hour == studentArrivalhour && mint == studentArrivalmint)
    {
        cout << "";
    }
    else
    {
        cout << "Late" << endl;
    }

    string result = timeCal(hour, mint, studentArrivalhour, studentArrivalmint);
    cout << result;
}
string timeCal(int hour, int mint, int studentArrHour, int studentArrMint)
{
    int examStartingTimeInMint;
    int studentCompleteTimeInMints;
    int differenceOfTime;
    int arrHours;
    int arrMints;
    examStartingTimeInMint = (hour * 60) + mint; // converts whole time into minutes
    studentCompleteTimeInMints = (studentArrHour * 60) + studentArrMint;
    if (hour > studentArrHour)
    {

        differenceOfTime = examStartingTimeInMint - studentCompleteTimeInMints;
        arrHours = differenceOfTime / 60;
        arrMints = differenceOfTime - (arrHours * 60);
        if (arrHours == 0)
        {
            return to_string(arrMints) + " minutes before the start";
        }
        return to_string(arrHours) + ":" + to_string(arrMints) + " hours before the start";
    }
    else if (hour == studentArrHour && mint == studentArrMint)
    {
        return "On time";
    }
    else
    {
        differenceOfTime = studentCompleteTimeInMints - examStartingTimeInMint;
        arrHours = differenceOfTime / 60;
        arrMints = differenceOfTime - (arrHours * 60);
        if (arrHours == 0)
        {
            return to_string(arrMints) + " minutes after the start";
        }
        return to_string(arrHours) + ":" + to_string(arrMints) + " hours after the start";
    }
}