#include <iostream>
#include <array>
#include <fstream>

//  (Venta x mes) * --> P --> Venta^12 
//  Venta = N

int main ()
{
   std::fstream file;
   file.open("test1.txt");
   std::array<unsigned,12> total{0};

	 for(unsigned int venta, mes; file >> venta >> mes;) {
		 total.at(mes) += venta;
		 std::cout << "Total de ventas en: " << mes << "\t" << venta << "\n";
	 }
   
}