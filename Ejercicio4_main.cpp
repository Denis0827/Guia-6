#include "Ejercicio4.h"
#include <iostream>

int main() {
    Carrito a(500);
    cout << "Tengo " << a.peso_disponible() << " de peso disponible para el carrito." << endl << endl;

    cout << "Agrego items." << endl;
    a.agregar_item("banana", 100, 50);
    a.agregar_item("manzana", 200, 30);
    cout << "Ahora tengo " << a.peso_disponible() << " de peso disponible para el carrito." << endl;
    cout << "El monto total es de " << a.monto_total() << "." << endl << endl;

    cout << "¿Estoy comprando banana?" << endl;
    if(a.buscar_item("banana")) {
        cout << "Sí, estoy comprando." << endl << endl;
    } else {
        cout << "No, no estoy comprando." << endl << endl;
    }

    cout << "El peso de la banana es de " << a.peso_de_item("banana") << "." << endl;
    cout << "El precio de la banana es de " << a.precio_de_item("banana") << "." << endl << endl;
    
    cout << "Agrego más items." << endl;
    a.agregar_item("anana", 200, 20);
    cout << "Ahora tengo " << a.peso_disponible() << " de peso disponible para el carrito." << endl;
    cout << "El monto total es de " << a.monto_total() << "." << endl << endl;

    cout << "Eliminamos la manzana del carrito." << endl;
    a.borrar_item("manzana");
    cout << "Ahora tengo " << a.peso_disponible() << " de peso disponible para el carrito." << endl;
    cout << "El monto total es de " << a.monto_total() << "." << endl << endl;

    cout << "¿Sigo comprando manzana?" << endl;
    if(a.buscar_item("manzana")) {
        cout << "Sí, estoy comprando." << endl;
    } else {
        cout << "No, no estoy comprando." << endl;
    }
}