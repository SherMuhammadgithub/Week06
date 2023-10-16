#include<iostream>
using namespace std;
string findZodiacsign(int, string);
main()
{
 int day;
 string month;
 cout<<"Enter the day of birth: ";
 cin>>day;
 cout<<"Enter the month of birth (e.g., January, February): ";
 cin>>month;
 string result = findZodiacsign(day, month);
 cout<<"Zodiac Sign: "<<result;
}
string findZodiacsign(int day, string month){
    if ((month == "March" &&  day >=  21 && day <= 31) || (month == "April"&&  day <= 19))
    {
        return "Aries";
    }
    else if ((month == "April" &&  day >=  20) && day <= 30 || (month == "May"&&  day <= 20))
    {
        return "Taurus";
    }
    else if ((month == "May" &&  day >=  21 && day <= 31) || (month == "June"&&  day <= 20))
    {
        return "Gemini";
    }
     else if ((month == "June" &&  day >=  21 && day <= 30) || (month == "July"&&  day <= 22))
    {
        return "Cancer";
    }
     else if ((month == "July" &&  day >=  23 && day <= 31) || (month == "August"&&  day <= 22))
    {
        return "Leo";
    }
     else if ((month == "August" &&  day >=  23 && day <= 31) || (month == "September"&&  day <= 22))
    {
        return "Virgo";
    }
     else if ((month == "Septempber" &&  day >=  23 && day <= 30) || (month == "October"&&  day <= 22))
    {
        return "Libra";
    }
     else if ((month == "October" &&  day >=  23 && day <= 31) || (month == "November"&&  day <= 21))
    {
        return "Scorpio";
    }
     else if ((month == "November" &&  day >=  22 && day <= 30) || (month == "December"&&  day <= 21))
    {
        return "Sagittarius";
    }
     else if ((month == "Decembar" &&  day >=  22 && day <= 31) || (month == "Januray"&&  day <= 19))
    {
        return "Capricon";
    }
     else if ((month == "January" &&  day >=  20 && day <= 31) || (month == "Feburary"&&  day <= 18))
    {
        return "Aquarius";
    }
      else if ((month == "February" &&  day >=  19 && day <= 28) || (month == "March"&&  day <= 20))
    {
        return "Pisces";
    }
    else{
        return "no range";
    }
    
    
    
}