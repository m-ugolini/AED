#include <cassert>

enum Puntos_cardinales {Norte, Sur, Este, Oeste};

int main(){
  assert(Puntos_cardinales::Norte == 0);
  assert(Puntos_cardinales::Sur != 3);
  assert(Puntos_cardinales::Este == 2);
  assert(Puntos_cardinales::Oeste != 1);
  return 0;
}