#include <cassert>
#include <iomanip>
#include <string>
using namespace std::literals;

int main ()
{
    // prueba bool
    assert(false==false);
    assert(true);
    assert(not false);
    assert(not false == true);
    assert (false or true);
    assert (true != false);
    assert (true or true and false);
    // prueba double 
    assert (2.0 == 1.0 + 1.0);
    assert (1 == 1.0);
    assert (2 == 1.0 + 1);
    assert(590.4 != 590.41);
    // prueba string
    assert ("algoritmos"s == "algo"s + "ritmos"s);
    assert ("algoritmos"s.length() == 10);
    // prueba int
    assert (4 == 3 + 1);
    assert (4 == 8 / 2);
    assert (10 == 6 + 4);
    // prueba char
    assert ( 97 == 'a');
    assert (':' == 58);
    assert ('Y' == 89 );
     //prueba unsigned
    assert (18446744073709551615 != 17446744073709551615);
    assert (12057839573875890058 == 12057839573875890058);
}
