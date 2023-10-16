#include<iostream>
using namespace std;
float calPer(float , float ,float, float , float);
string calGrade(float);
main()
{
    float eng, math, chem, soicalsci, bio;
    cout <<"Enter student name: ";
    string name;
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>eng;
    cout<<"Enter marks for Maths: ";
    cin>>math;
    cout<<"Enter marks for Chemistry: ";
    cin>>chem;
    cout<<"Enter marks for Social Science: ";
    cin>>soicalsci;
    cout<<"Enter marks for Biology: ";
    cin>>bio;
    cout<<"Student Name: "<<name<<endl;
    float perHold = calPer(eng, math, chem, soicalsci, bio);
    cout<<"Percentage: "<<perHold<<"%"<<endl;
    string grade = calGrade(perHold);
    cout<<"Grade: "<<grade;;



    

}
float calPer(float eng, float math, float chem, float socialsci, float bio){
    float calPercentage;
    calPercentage = ((eng + math + chem + socialsci + bio)/500) * 100;

      return calPercentage;
}
string calGrade(float per){
   
    if (per >= 90 && per <= 100){
        return "A+";

    }
    else if(per >= 80 && per <= 90){
        return "A";

    }
    else if (per >= 70 && per <= 80)
    {
        return "B+";
    }
    else if (per >=60 && per <= 70)
    {
        return "B";
    }
    else if (per >= 50 &&  per <= 60)
    {
        return "C";
    }
    else if (per >= 40 && per <= 50)
    {
        return "D";
        /* code */
    }
    else {
        return "F";
    }
    
    
    
}