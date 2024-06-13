#include "Ejercicio3.h"
#include <iostream>

int main() {
    Fecha a(2, 6, 2024);
    cout << "Estamos en el dia " << a.dia() << " del mes " << a.mes() << " del año " << a.anio() << " ." << endl << endl;

    cout << "Avanzamos un dia." << endl;
    a.avanzar_dia();
    cout << "Ahora estamos en el dia " << a.dia() << " del mes " << a.mes() << " del año " << a.anio() << " ." << endl << endl; 

    cout << "Avanzamos 34 dias." << endl;
    a.avanzar_n_dias(34);
    cout << "Ahora estamos en el dia " << a.dia() << " del mes " << a.mes() << " del año " << a.anio() << " ." << endl << endl;

    cout << "Veamos si estamos en el dia 7 del mes 7 del año 2024." << endl;
    Fecha a2(7, 7, 2024);
    if(a.operator==(a2)) {
        cout << "Sí, estamos en ese dia." << endl << endl;
    } else {
        cout << "No, no estamos en ese dia." << endl << endl;
    }

    cout << "===========================================" << endl << endl;

    Usuario b("Denis", 19);
    cout << "Hola. Soy " << b.nombre() << " y tengo " << b.edad() << " años." << endl;

    cout << "Agregamos unos amigos." << endl << endl;
    b.agregar_amigo("Alex");
    b.agregar_amigo("Santi");
    b.agregar_amigo("Juan");
    b.agregar_amigo("Pedro");

    cout << "¿Alex es amigo de Denis?" << endl;
    if(b.es_amigo("Alex")) {
        cout << "Sí, lo es." << endl << endl;
    } else {
        cout << "No, no lo es." << endl << endl;
    }

    cout << "¿Denis es popular?" << endl;
    if(b.es_popular()) {
        cout << "Sí, lo es." << endl << endl;
    } else {
        cout << "No, no lo es." << endl << endl;
    }

    cout << "===========================================" << endl << endl;

    Multiconjunto c;
    cout << "Empiezo con un multiconjunto de " << c.cardinal() << " elementos." << endl;
    cout << "Agrego elementos." << endl << endl;

    c.agregar(1);
    c.agregar(1);
    c.agregar(2);
    c.agregar(2);

    cout << "Ahora tengo " << c.cardinal() << " elementos." << endl;
    cout << "Además tengo " << c.cantidad_elementos_distintos() << " elementos distintos." << endl << endl;

    cout << "El numero 1 aparece " << c.contar_apariciones(1) << " veces." << endl;
    c.quitar(1);
    cout << "Pero luego de eliminarlo, aparece " << c.contar_apariciones(1) << " veces." << endl;
    cout << "Ahora tengo " << c.cardinal() << " elementos." << endl;
    cout << "Además tengo " << c.cantidad_elementos_distintos() << " elementos distintos." << endl;
}