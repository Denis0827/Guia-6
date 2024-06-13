#include "Ejercicio2.h"
#include <iostream>
using namespace std;

int main() {
    Tateti a;
    if(a.a_quien_le_toca() == Jugador::cruz) {
        cout << "Le toca a la cruz." << endl;
        a.hacer_jugada(Jugador::cruz, 1, 1);
    } else {
        cout << "Le toca al circulo." << endl;
        a.hacer_jugada(Jugador::circulo, 1, 1);
    }
    if(a.observar_posicion(1, 1) == Casillero::cruz) {
        cout << "La posicion 1 1 queda como cruz." << endl << endl;
    } else {
        cout << "La posicion 1 1 queda como circulo." << endl << endl;
    }
    
    cout << "Realizamos jugadas." << endl;
    a.hacer_jugada(Jugador::circulo, 1, 2);
    a.hacer_jugada(Jugador::cruz, 0, 1);

    if(a.esta_terminado() == true) {
        cout << "El juego ha terminado." << endl << endl;
    } else {
        cout << "El juego todavía no ha terminado." << endl << endl;
    }

    cout << "Realizamos otras jugadas." << endl;
    a.hacer_jugada(Jugador::circulo, 0, 2);
    a.hacer_jugada(Jugador::cruz, 2, 1);

    if(a.esta_terminado() == true) {
        cout << "El juego ha terminado." << endl;
    } else {
        cout << "El juego todavía no ha terminado." << endl;
    }

    if(a.hubo_empate() == true) {
        cout << "Hubo empate." << endl;
    } else {
        cout << "No hubo empate." << endl;
        if(a.quien_gano() == Jugador::circulo) {
            cout << "Gano el circulo." << endl; 
        } else {
            cout << "Gano la cruz." << endl;
        }
    }
}