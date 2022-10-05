#include <cassert>
#include <iostream>

// Abs: R --> R / Abs(a) = {-a si a<0
//                         { a si a>0

// Min: R --> R / Minimo(x,y)= { x si x<y
//                             { y si y<x
//                             { 0 si x=y

// Beta: R --> R /Beta(x) = {0 si x=0
//                          {3 si x=-3
//                          {-3 si x=3
//                          { x si  x<-3
//                          {-3x  si -3<x<0
//                          {-3x  si 0<x<3
//                          { x si 3<x

int Abs(int);
int Minimo(int, int);
double Beta(double);


int main ()
{
   double x = 9;
   std::cout << Beta(x);
}

 int Abs(int a)
  {
    return a<0 ? -a : a ;
  }

  int Minimo(int x, int y)
  {
    return x<y ? x:
           y<x ? y:
                 0;
  }

  double Beta(double x)
  {
    return  x==0 ? 0:
           -3==x ? 3:
            3==x ? -3:
           -3>x  ? x:
   (-3<x && x<0) ? -3*x:           
  	(0<x && x<3) ? -3*x:
          x;    
  }