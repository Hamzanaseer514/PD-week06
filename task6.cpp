#include <iostream>

using namespace std;

main()
{
    float stays;
    string month;
    cout << "Enter the month : ";
    cin >> month;
    cout << "Enter the days you stay : ";
    cin >> stays;
    float totalApartmentPrice;
    float totalStudioPrice;
    float total1;
    float total2;
    if (month == "May" || month == "October")
    {
        if (stays > 7 && stays < 15)
        {
            totalApartmentPrice = stays * 65;
            totalStudioPrice = stays * 50;
            total2 = totalStudioPrice - (totalStudioPrice * 0.05);
            cout << "Appartement price : " << totalApartmentPrice << "$"<<endl;
            cout << "Studio price : " << total2 << "$"<<endl;
        }
        if (stays > 14)
        {
            totalApartmentPrice = stays * 65;
            totalStudioPrice = stays * 50;
            total1 = totalApartmentPrice - (totalApartmentPrice * 0.1);
            total2 = totalStudioPrice - (totalStudioPrice * 0.3);
            cout << "Appartement price : " << total1 << "$"<<endl;
            cout << "Studio price : " << total2 << "$"<<endl;
        }
    }
    if (month == "June" || month == "September")
    {
        if (stays > 14)
        {
            totalApartmentPrice = stays * 68.70;
            totalStudioPrice = stays * 75.20;
            total1 = totalApartmentPrice - (totalApartmentPrice * 0.1);
            total2 = totalStudioPrice - (totalStudioPrice * 0.2);
            cout << "Appartement price : " << total1 << "$"<<endl;
            cout << "Studio price : " << total2 << "$"<<endl;
        }
    }
    if (month == "July" || month == "September")
    {
        totalStudioPrice = stays * 76;
        totalApartmentPrice = stays * 77;
        total1 = totalApartmentPrice - (totalApartmentPrice * 0.1);
        cout << "Appartement price : " << total1 << "$"<<endl;
        cout << "Studio price : " << totalStudioPrice << "$"<<endl;
    }
}