#include "Ejercicio1.h"
#include <iostream>

int main() {
    Libro a("It", "Stephen King", 982);
    cout << "El libro tiene " << a.paginas_totales() << " paginas." << endl;
    cout << "Empiezo a leer la página " << a.pagina_actual() << " ." << endl << endl;

    cout << "Avanzo 121 páginas." << endl;
    a.avanzar_paginas(121);
    cout << "Ahora estoy en la página " << a.pagina_actual() << " ." << endl;
    cout << "He leído " << a.porcentaje_leido() << "% del libro." << endl;

    if(a.finalizado()) {
        cout << "Terminé el libro" << endl << endl;
    } else {
        cout << "Todavía no terminé el libro" << endl << endl;
    }

    cout << "Salteo a la página 982." << endl;
    a.saltar_a_pagina(982);
    cout << "Ahora estoy en la página " << a.pagina_actual() << " ." << endl;

    if(a.finalizado()) {
        cout << "Terminé el libro." << endl;
    } else {
        cout << "Todavía no terminé el libro." << endl;
    }
}