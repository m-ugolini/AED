#include <iostream>
#include <array>
#include <fstream>

int main ()
{
	 std::fstream file;
	 file.open("test2.txt");
     std::array<std::array<unsigned int, 12>, 3> total{0};

	 for(unsigned int venta, mes, vendedor; file >> venta >> mes >> vendedor;) {
		 total[vendedor][mes] += venta;
	 }

	 for(int i=0; i<3; i++) {
		 std::cout << "Vendedor: " << i << "\n";
		 for (int j=0; j<12; j++) {
			 std::cout << "Mes: " << j << "\t" << "Total: " << total[i][j] << "\n";
		 }
	 }
}