#include <cassert>
#include <iostream>

/* GetCantidadDeDías: N --> N / GetCantidadDeDías(mes)= { mes = 1 or 3 or 5 or 7 or 8 or 10 or 12 => 31
                                                        { mes = 4 or 6 or 9 or 11 => 30
                                                        { mes = 2 => { EsBisisto = true => 29
                                                                     { EsBisiesto = false => 28

*/

unsigned int GetCantidadDeDias (unsigned int);
bool IsBisiesto(int);


int main()
{
   assert(GetCantidadDeDias(1) == 31);
   assert(GetCantidadDeDias(3) == 31);
   assert(GetCantidadDeDias(4) == 30);
   assert(GetCantidadDeDias(5) == 31);
   assert(GetCantidadDeDias(6) == 30);
   assert(GetCantidadDeDias(7) == 31);
   assert(GetCantidadDeDias(8) == 31);
   assert(GetCantidadDeDias(9) == 30);
   assert(GetCantidadDeDias(10) == 31);
   assert(GetCantidadDeDias(11) == 30);
   assert(GetCantidadDeDias(12) == 31);

 std::cout << GetCantidadDeDias(2);

    return 0;
}

unsigned int GetCantidadDeDias (unsigned int mes)
{  if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
     {
       return 31;
     }
   else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
         {
          return 30;
         } 
   if (mes == 2)
   {
      int anio;
      std::cout <<"Ingrese el anio";
      std::cin >> anio;
      return IsBisiesto(anio) ? 29:
                                28;
   }      
}

bool IsBisiesto (int year) {
    {
     return (year%4 == 0 and year%100 != 0 ) ? true:
                             (year%400 == 0) ? true:
                                              false;
    }
}