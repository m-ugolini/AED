#include <cassert>
#include <iostream>

//f:R->R / f(x)= (x - 32)*(5/9)
 double Celsius (double);

//f:RXRXR->B / f(x,y,z)= V si y - |z| <= x <= y + |z| && F e.o.c
 bool AreNear (double, double, double = 0.01);

  int main ()
{
   assert (AreNear (170.0, 76.0, 100));
   assert (AreNear(170.0, Celsius(170.0), 100));
   assert (AreNear(2.0,3.0,1.0));
   assert (AreNear(31.0,Celsius(86),1));
   assert (AreNear(-7,6,1) == false);
   assert (Celsius(170.0) >= 76.0);
   assert (Celsius(32.0) == 0);
   assert (Celsius (42.0) >= 5.0);
   assert (Celsius(90.0) >= 32.2);
   assert (AreNear(32.2,Celsius(90.0),1) == true);
}

  double Celsius (double far) 
 {
   return (far - 32.0) * (5.0/9.0) ;
 }

  bool AreNear (double a, double b, double c) 
 {
   return (b-c) <= a && a <= (b+c);
 }