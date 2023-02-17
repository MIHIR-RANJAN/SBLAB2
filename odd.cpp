  /**
  * @file odd.cpp
  * @author Jan Doe
  * @version 1.0 *
  * @section LICENSE *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the GNU General Public License as
  * published by the Free Software Foundation; either version 2 of
  * the License, or (at your option) any later version. *
  * @section DESCRIPTION *
  * The time class represents a moment of time. */




#include <iostream>
using namespace std;
int main() {
   int num = 25;
   if(num % 2 == 0)
   cout<<num<<" is even";
   else
   cout<<num<<" is odd";
   return 0;
}