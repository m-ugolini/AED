#include <array>
#include <fstream>
#include <iostream>

int main() {
  using std::array;
  array<array<array<unsigned int, 12>, 3>, 4> total{0};

  std::fstream file;
  file.open("test3.txt");

  for (unsigned venta, mes, vendedor, region;
       file >> venta >> mes >> vendedor >> region;)
    total[region][vendedor][mes] += venta;

  for (int i = 0; i < 4; i++) {
    std::cout << "Region: " << i << '\n';

    for (int j = 0; j < 3; j++) {
      std::cout << "Vendedor: " << j << '\n';

      for (int k = 0; k < 12; k++)
        std::cout << "Mes: " << k << '\t' << "Ventas: " << total[i][j][k]
                  << '\n';
    };
  }
}