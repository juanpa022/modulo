#include <iostream>
#include <stdalign.h>
Using namespace std;
void division(int d, int divisor)
{
  int c,r;

  if (d > 0) 
    c = d / divisor;r = d - c*divisor;

  else 
    c = d / divisor;r = (c*divisor)-d;

  cout << "cociente-> "<<c<<"\n"<<"residuo-> "<< residuo <<endl;

}