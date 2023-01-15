#include <iostream>

using namespace std;
main()
{
    string month;
    int day;
    cout<<"Enter the day :  ";
    cin>>day;
    cout<<"Enter the month : ";
    cin>>month;
   

    if (month == "march" || month == "april" && (day >=21 && day <=31 && day >=1 && day <=19) )
    {
        cout<<"Aries";
    }
    else if (month == "april" || month == "may" && (day >=20 && day <=30 && day >=1 && day <=20) )
    {
        cout<<"Taurus";
    }
    else if (month == "may" || month == "june" && (day >=21 && day <=31 && day >=1 && day <=22) )
    {
        cout<<"Gemini";
    }
    else if (month == "june" || month == "july" && (day >=21 && day <=30 && day >=1 && day <=22) )
    {
        cout<<"Cancer";
    }
    else if (month == "july" || month == "august" && (day >=23 && day <=31 && day >=1 && day <=22) )
    {
        cout<<"Leo";
    }
    else if (month == "august" || month == "september" && (day >=23 && day <=31 && day >=1 && day <=21) )
    {
        cout<<"Virgo";
    }
    else if (month == "september" || month == "october" && (day >=23 && day <=30 && day >=1 && day <=22) )
    {
        cout<<"Libra";
    }
    else if (month == "october" || month == "november" && (day >=23 && day <=31 && day >=1 && day <=21) )
    {
        cout<<"Scorpia";
    }
    else if (month == "november" || month == "december" && (day >=22 && day <=30 && day >=1 && day <=21) )
    {
        cout<<"Saggittrius";
    }
    else if (month == "december" || month == "january" && (day >=22 && day <=31 && day >=1 && day <=19) )
    {
        cout<<"Capricon";
    }
    else if (month == "january" || month == "february" && (day >=20 && day <=31 && day >=1 && day <=18) )
    {
        cout<<"Aquarius";
    }
    else if (month == "february" || month == "march" && (day >=19 && day <=28 && day >=1 && day <=20) )
    {
        cout<<"Pisces";
    }
    
}
