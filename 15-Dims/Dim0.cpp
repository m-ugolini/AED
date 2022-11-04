#include <iostream>
#include <fstream>

// Venta* --> P --> Venta
// Venta = N

int main() {

  std::fstream file;

  file.open("test0.txt");
  unsigned int total{0};

  for (unsigned int venta; file >> venta;) {
    total += venta;
  }
  std::cout << "Total de ventas:" << " " << total << '\n';
}