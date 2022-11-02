#include <iostream>
#include <string>

enum Prefijos {Veinte = 20, Venticuatro = 24, Veintitres = 23, Ventisiete = 27};

enum Sufijos { Uno = 1, Dos, Tres, Cuatro, Cinco, Seis, Siete, Ocho, Nueve };

void crearCuil(std::string);

int main() {
  std::string dni = "";
  std::cout << "Ingrese su número de documento" << "\n";
  std::cin >> dni;
  crearCuil(dni);
       return 0;
}

void crearCuil(std::string dni) {
  for (Prefijos i = Veinte; i <= Ventisiete; i = Prefijos(i + 1)) {
    for (Sufijos j = Uno; j <= Nueve; j = Sufijos(j + 1)) {
      std::string cuil =
          std::to_string(i) + "-" + dni + "-" + std::to_string(j);
      std::cout << cuil << "\n";
    }
  }
}