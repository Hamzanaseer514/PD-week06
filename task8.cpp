#include <iostream>
using namespace std;

main()
{
  int x;
  int y;
  int h;
  cout<<"Enter the value of h : ";
  cin>>h;
  cout<<"Enter the coordinate of x : ";
  cin>>x;
  cout<<"Enter the coordinate of y : ";
  cin>>y;
  
  if (((x >= 0 && x <= 3*h) && (y >= 0 && y <= h)) || ((x >= h && x <= 2*h) && (y >= h && y <= 4*h)))
  {
    if (x % h == 0 && y % h == 0)
    {
      cout<<"Border";
    }
    else
    {
    cout<<" Inside";
    }
  }
  else
  {
    cout<<"outside"; 

  }


}