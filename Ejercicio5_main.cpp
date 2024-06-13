#include "Ejercicio5.h"
#include <iostream>

int main() {
    Fecha a(127, 2024);
    cout << "Estamos en el dia " << a.dia() << " del mes " << a.mes() << " del año " << a.anio() << " ." << endl << endl;

    cout << "Avanzamos un dia." << endl;
    a.avanzar_dia();
    cout << "Ahora estamos en el dia " << a.dia() << " del mes " << a.mes() << " del año " << a.anio() << " ." << endl << endl; 

    cout << "Avanzamos 34 dias." << endl;
    a.avanzar_n_dias(34);
    cout << "Ahora estamos en el dia " << a.dia() << " del mes " << a.mes() << " del año " << a.anio() << " ." << endl << endl;

    Fecha a2(168, 2024);
    cout << "Veamos si estamos en el dia " << a2.dia() << " del mes " << a2.mes() << " del año " << a2.anio() << " ." << endl;
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

    /*
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
    */

    cout << "===========================================" << endl << endl;

    Carrito d(500);
    cout << "Tengo " << d.peso_disponible() << " de peso disponible para el carrito." << endl << endl;

    cout << "Agrego items." << endl;
    d.agregar_item("banana", 100, 50);
    d.agregar_item("manzana", 200, 30);
    cout << "Ahora tengo " << d.peso_disponible() << " de peso disponible para el carrito." << endl;
    cout << "El monto total es de " << d.monto_total() << "." << endl << endl;

    cout << "¿Estoy comprando banana?" << endl;
    if(d.buscar_item("banana")) {
        cout << "Sí, estoy comprando." << endl << endl;
    } else {
        cout << "No, no estoy comprando." << endl << endl;
    }

    cout << "El peso de la banana es de " << d.peso_de_item("banana") << "." << endl;
    cout << "El precio de la banana es de " << d.precio_de_item("banana") << "." << endl << endl;
    
    cout << "Agrego más items." << endl;
    d.agregar_item("anana", 200, 20);
    cout << "Ahora tengo " << d.peso_disponible() << " de peso disponible para el carrito." << endl;
    cout << "El monto total es de " << d.monto_total() << "." << endl << endl;

    cout << "Eliminamos la manzana del carrito." << endl;
    d.borrar_item("manzana");
    cout << "Ahora tengo " << d.peso_disponible() << " de peso disponible para el carrito." << endl;
    cout << "El monto total es de " << d.monto_total() << "." << endl << endl;

    cout << "¿Sigo comprando manzana?" << endl;
    if(d.buscar_item("manzana")) {
        cout << "Sí, estoy comprando." << endl;
    } else {
        cout << "No, no estoy comprando." << endl;
    }
}