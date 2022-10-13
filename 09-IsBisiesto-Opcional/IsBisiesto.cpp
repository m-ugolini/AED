#include <cassert>
#include <iostream>
// IsBisiesto: Z --> B / IsBisiesto(year) = {true si ( year%4 = 0 y year%100 != 0 ) o year%400 = 0
//                                          {false e.o.c


bool IsBisiesto (int);

int main()
{
 assert(IsBisiesto(2022) == false);
 assert(IsBisiesto(2024) == true);
 assert(IsBisiesto(2014) != true);
 assert(IsBisiesto(2012) != false);
 assert(IsBisiesto(1998) == 0);
 assert(IsBisiesto(1780) == 1);
}

bool IsBisiesto (int year) {
    {
     return (year%4 == 0 and year%100 != 0 ) ? true:
                             (year%400 == 0) ? true:
                                              false;
    }
}