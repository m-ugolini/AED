#include <cassert>
#include <iomanip>
#include <string>
using namespace std::literals;

int main ()
{
    // prueba bool
     assert(false == false);
     assert(true);
     assert(not false);
     assert(not false == true);
     assert (false or true);
     assert (true != false);
     assert (true or true and false);
     assert (false == (80 == 90));
     
    // prueba double 
     assert (2.0 == 1.0 + 1.0);
     assert (1 == 1.0);
     assert (2 == 3.0 - 1);
     assert(590.4 != 590.5);
     assert (90.80 <= 90.81);
     assert (7.0 >= 14 / 2.0);
     assert (8.0 != 4 * 4.0);

    // prueba string
     assert ("algoritmos"s == "algo"s + "ritmos"s);
     assert ("algoritmos"s.length() == 10);
     assert ("hola"s >= "chau"s );
     assert ("Hola como estas"s.length() <= 16);

    // prueba int
     assert (4 == 3 + 1);
     assert (4 == 8 / 2);
     assert (10 == 6 + 4);
     assert (300 >= 270);
     assert (90 <= 45 * 2);
     assert (81 >= 80);
     assert (90 % 80 != 7);

    // prueba char
     assert ( 97 == 'a');
     assert (59 - 1 == ':');
     assert ('Y' != 88 );
     assert ('M' <= 'O');
     assert (200 / 2 >= 'T');
     assert (96 + 1 == 'a');
     assert (45 * 2 == 'Z');
     assert (98 % 2 != 'm');
     
     //prueba unsigned
     assert (0u != 17u);
     assert (15u == 14u + 1u);
     assert (90u <= 900u / 10u);
     assert (4000u >= 3000u * 1u);
     assert (12057839573875890058u != 12057839573875890058u - 12u);
     assert (90u % 45u != 9u);
}
