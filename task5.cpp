#include <iostream>

using namespace std;

main()
{
    string fruit;
    string day;
    float quantity;
    cout<<"Enter the fruit : ";
    cin>>fruit;
    cout<<"Enter the day : ";
    cin>>day;
    cout<<"Enter the quantity of the fruits :  ";
    cin>>quantity;
    float totalPrice;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if(fruit == "banana")
        {
            totalPrice = quantity*2.50;
            cout<<totalPrice;
        }
         if(fruit == "apple")
        {
            totalPrice = quantity*1.20;
            cout<<totalPrice;
        }
         if(fruit == "orange")
        {
            totalPrice = quantity*0.85;
            cout<<totalPrice;
        }
         if(fruit == "grapefruit")
        {
            totalPrice = quantity*1.45;
            cout<<totalPrice;
        }
         if(fruit == "kiwi")
        {
            totalPrice = quantity*2.70;
            cout<<totalPrice;
        }
         if(fruit == "pineapple")
        {
            totalPrice = quantity*5.50;
            cout<<totalPrice;
        }
         if(fruit == "grapes")
        {
            totalPrice = quantity*3.85;
            cout<<totalPrice;
        }

    }
     if (day == "Saturday" || day == "Sunday")
     {
           if(fruit == "banana")
        {
            totalPrice = quantity*2.70;
            cout<<totalPrice;
        }
         if(fruit == "apple")
        {
            totalPrice = quantity*1.25;
            cout<<totalPrice;
        }
         if(fruit == "orange")
        {
            totalPrice = quantity*0.90;
            cout<<totalPrice;
        }
         if(fruit == "grapefruit")
        {
            totalPrice = quantity*1.60;
            cout<<totalPrice;
        }
         if(fruit == "kiwi")
        {
            totalPrice = quantity*3.0;
            cout<<totalPrice;
        }
         if(fruit == "pineapple")
        {
            totalPrice = quantity*5.60;
            cout<<totalPrice;
        }
         if(fruit == "grapes")
        {
            totalPrice = quantity*4.20;
            cout<<totalPrice;
        }  
     }


}