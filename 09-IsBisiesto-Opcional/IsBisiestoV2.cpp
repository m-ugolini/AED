#include <cassert>
#include <iostream>
// IsBisiesto: Z --> B / IsBisiesto(year) = {true si ( year%4 = 0 y year%100 != 0 ) o year%400 = 0
//                                          {false e.o.c


bool IsBisiesto (int);

int main()
{
 assert(IsBisiesto(2022) == false);
 assert(IsBisiesto(2024) != false);
 assert(IsBisiesto(2014) == false);
 assert(IsBisiesto(2012) == true);
 assert(IsBisiesto(2096) == 1);
 assert(IsBisiesto(1780) != 0);
 assert(IsBisiesto(2016) != false);
}

bool IsBisiesto (int year){
    if(year%4 == 0 && year%100 != 0 || year%400 == 0)
     {
       return true;
     }
    else
    {
        return false;
    }
}