#include <iostream>

using namespace std;


main()
{
 string temperature;
 string humidity;
 cout<<"Enter the temperature : ";
 cin>>temperature;
 cout<<"Enter the humidity : ";
 cin>>humidity;
 if (temperature == "warm" && humidity == "dry")
 {
    cout<<"Play tennis ";
 }
  if (temperature == "warm" && humidity == "humid")
 {
    cout<<"swim ";
 }
  if (temperature == "cold" && humidity == "dry")
 {
    cout<<"Paly basketball ";
 }
  if (temperature == "cold" && humidity == "humid")
 {
    cout<<"Watch Tv ";
 }
}