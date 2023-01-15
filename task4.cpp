#include <iostream>

using namespace std;

main()
{
    string customer;
    char letter;
    float minutes;
    cout << "Enter which type of customer you are : ";
    cin >> customer;
    cout << "Press D for time day and press N for time night : ";
    cin >> letter;
    cout << "Enter the minutes you used the service : ";
    cin >> minutes;
    int price;
    if (customer == "regular")
    {
        if (minutes > 50)
       {
         minutes = minutes - 50;
        price = (minutes * 0.20) + 10.00;
        cout << price;
       }
       else
        {
            price = 10;
            cout << price;
        }
    }

    if (customer == "premium" && letter == 'D')
    {
        if(minutes > 75)
        {
        minutes = minutes - 75;
        price = (minutes * 0.10) + 25;
        cout << price;
        }
        else
        {
            price = 25;
            cout << price;
        }
    }

    if (customer == "premium" && letter == 'N')
    {
        if (minutes > 100)
        {
        minutes = minutes - 75;
        price = (minutes * 0.05) + 25;
        cout << price;
        }
       else
        {
            price = 25;
            cout << price;
        }
    }
}