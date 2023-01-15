#include <iostream>

using namespace std;

main()
{
    string name;
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the marks of English : ";
    cin>>marks1;
    cout<<"Enter the marks of Maths : ";
    cin>>marks2;
    cout<<"Enter the marks of Chemistry : ";
    cin>>marks3;
    cout<<"Enter the marks of Socail Science : ";
    cin>>marks4;
    cout<<"Enter the marks of Biology : ";
    cin>>marks5;
    float totalMarks;
    totalMarks = marks1+marks2+marks3+marks4+marks5;
    float percentage;
    percentage = (totalMarks/500)*100;
    cout<<"The name of student is : "<<name<<endl;
    cout<<"The marks he obtained out of 500 is : "<<totalMarks<<endl;
    cout<<"The percentage is : "<<percentage<<endl;
    if (percentage >= 90 && percentage <= 100)
    {
        cout<<"The grade is A+";
    }
    if (percentage >= 80 && percentage < 90)
    {
        cout<<"The grade is A";
    }
    if (percentage >= 70 && percentage < 80)
    {
        cout<<"The grade is B+";
    }
    if (percentage >= 60 && percentage < 70)
    {
        cout<<"The grade is B";
    }
    if (percentage >= 50 && percentage < 60)
    {
        cout<<"The grade is C";
    }
    if (percentage >= 40 && percentage < 50)
    {
        cout<<"The grade is D";
    }
    if (percentage < 40 )
    {
        cout<<"The grade is F";
    }
    



}