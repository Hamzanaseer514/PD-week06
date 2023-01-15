#include <iostream>
using namespace std;

main()
{
  int examHours;
  int examMinutes;
  int reachHours;
  int reachMinutes;
  cout<<"Enter the hours of exam time (0-23): ";
  cin>>examHours;
  cout<<"Enter the minutes of exam time (0-59) : ";
  cin>>examMinutes;
  cout<<"Enter the hours of reached time (0-23) : ";
  cin>>reachHours;
  cout<<"Enter the minutes of reached time (0-59) : ";
  cin>>reachMinutes;
  int hours1;
  int hours2;
  hours1 = examHours*60;
  hours2 = reachHours*60;
  hours1 = hours1+examMinutes;
  hours2 = hours2+reachMinutes;
  int total;
  int hoursTime;
  if (examHours >= 24 || reachHours >= 24 || examMinutes >= 60 || reachMinutes == 60)
  {
   cout<<"Please Enter the valid number !!! ";
  }
  if (hours1 > hours2)
  {
    total = hours1 - hours2;
    if (total > 59)
    {
      total = total%60;
      reachMinutes = total;
      hoursTime = examHours - reachHours;
      cout<<"Early"<<endl;
     cout<<hoursTime<<":"<<reachMinutes<< " hours before the exam"<<endl;
    }
    else if (total < 59)
    {
      reachMinutes = total;
      hoursTime = examHours - reachHours;
      cout<<"Early"<<endl;
      cout<<hoursTime<<":"<<reachMinutes<< " minutes before the exam"<<endl;
    }
  }
  if(hours1 < hours2)
  {
    total = hours2 - hours1;
     if (total > 59)
    {
      total = total%60;
      reachMinutes = total;
      hoursTime = reachHours - examHours;
      cout<<"Late"<<endl;
     cout<<hoursTime<<":"<<reachMinutes<< " hours after the exam"<<endl;
    }
    else if (total < 59)
    {
      reachMinutes = total;
      hoursTime = reachHours - examHours;
      cout<<"Late"<<endl;
      cout<<hoursTime<<":"<<reachMinutes<< " minutes after the exam"<<endl;
    }

  }
  if (hours1 == hours2)
  {
    cout<<"On Time ";
  }


  
}
