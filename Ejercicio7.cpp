#include "Ejercicio3.h"
#include "Ejercicio4.h" 
#include <iostream>

int main() {
    cout << "Comparo mi nacimiento con mi primer cumpleaños, despues de avanzarlo un año." << endl;
    Fecha a(27, 8, 2004);
    Fecha a1(27, 8, 2005);
    a.avanzar_n_dias(12*31);
    if(a.operator==(a1)) {
        cout << "Las fechas son iguales." << endl << endl;
    } else {
        cout << "Las fechas son distintas." << endl << endl;
    }

    cout << "Veamos si Alex es mi amigo." << endl;
    Usuario b("Denis", 19);
    b.agregar_amigo("Alex");
    b.agregar_amigo("Santi");
    b.agregar_amigo("Juan");
    b.agregar_amigo("Pedro");
    b.agregar_amigo("Rafa");
    if(b.es_amigo("Alex")) {
        cout << "Sí, es mi amigo." << endl << endl;
    } else {
        cout << "No, no es mi amigo." << endl << endl;
    }

    cout << "Construyo el multiconjunto {2, 65, 2, 3, 8, 8, 7, 65, 0}." << endl;
    Multiconjunto c;
    c.agregar(2);
    c.agregar(65);
    c.agregar(2);
    c.agregar(3);
    c.agregar(8);
    c.agregar(8);
    c.agregar(7);
    c.agregar(65);
    c.agregar(0);
    cout << "El multiconjunto tiene " << c.cantidad_elementos_distintos() << " elementos distintos." << endl;
}

