#include <cassert>


enum struct Asignatura {Algoritmos, Sintaxis};
enum struct Turno {Maniana, Tarde, Noche};
enum struct Dia {Domingo, Lunes, Martes, Miercoles, Jueves, Viernes, Sabado};


Asignatura AsignaturaQueCurso(Dia, Turno);
bool TengoQueCursar(Dia, Turno);
bool TengoQueCursarBis(Dia, Turno);
Dia DiaQueCurso(Asignatura);
Turno TurnoQueCurso(Asignatura);


int main(){
 assert( Dia::Jueves == DiaQueCurso(Asignatura::Algoritmos));
 assert( Dia::Lunes == DiaQueCurso(Asignatura::Sintaxis) );
 assert( Turno::Noche == TurnoQueCurso(Asignatura::Sintaxis) );
 assert( Turno::Noche == TurnoQueCurso(Asignatura::Algoritmos));
 assert( TengoQueCursar(Dia::Lunes, Turno::Noche));
 assert( not TengoQueCursar(Dia::Lunes, Turno::Tarde));
 assert( TengoQueCursar(Dia::Jueves, Turno::Noche));
 assert( not TengoQueCursar(Dia::Jueves, Turno::Maniana));
 assert( not TengoQueCursar(Dia::Domingo, Turno::Maniana));
 assert( AsignaturaQueCurso(Dia::Lunes, Turno::Noche) == Asignatura::Algoritmos);
 assert( AsignaturaQueCurso(Dia::Jueves, Turno::Noche) == Asignatura::Sintaxis);
}


Asignatura AsignaturaQueCurso(Dia d, Turno t){
    return  d == Dia::Lunes and t == Turno::Noche ? Asignatura::Algoritmos:
                                                    Asignatura::Sintaxis;                                                                   
}


bool TengoQueCursar(Dia d, Turno t){
return
 DiaQueCurso(Asignatura::Sintaxis) == d and
 TurnoQueCurso(Asignatura::Sintaxis) == t
 or
 DiaQueCurso(Asignatura::Algoritmos) == d and
 TurnoQueCurso(Asignatura::Algoritmos) == t;
}


bool TengoQueCursarBis(Dia d, Turno t){
return
 d==Dia::Lunes and t==Turno::Noche
 or
 d==Dia::Jueves and t==Turno::Noche;
}


Dia DiaQueCurso(Asignatura a){return
 a == Asignatura::Algoritmos ? Dia::Jueves :
                               Dia::Lunes ;}


Turno TurnoQueCurso(Asignatura a){return Turno::Noche;}