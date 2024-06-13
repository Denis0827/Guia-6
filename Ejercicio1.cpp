#include "Ejercicio1.h"

Libro::Libro(string titulo, string autor, int cantidad_paginas) {
    this->_autor = autor;
    this->_paginas_totales = cantidad_paginas;
    this->_titulo = titulo;
    this->_pagina_actual = 1;
} 
        
int Libro::paginas_totales() const {
    // Pre: nada.
    return this->_paginas_totales;
}

int Libro::pagina_actual() const {
    // Pre: nada.
    return this->_pagina_actual;
} 

int Libro::porcentaje_leido() const {
    // Pre: nada.
    double porcentaje = this->_pagina_actual * 100 / this->paginas_totales();
    return porcentaje;
} 

void Libro::avanzar_paginas(int n) {
    // Pre: 0 < this->pagina_actual() + n <= this->paginas_totales()
    this->_pagina_actual += n;
}

void Libro::saltar_a_pagina(int k) {
    // Pre: 0 < k <= this->paginas_totales()
    this->_pagina_actual = k;
} 

bool Libro::finalizado() const {
    if(this->pagina_actual() == this->paginas_totales()) {
        return true;
    } else {
        return false;
    }
}