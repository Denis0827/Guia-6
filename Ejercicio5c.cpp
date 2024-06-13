#include "Ejercicio5.h"

Multiconjunto::Multiconjunto() {
    this->_elementos;
}

void Multiconjunto::agregar(int e) {
    bool esta = false;
    int i = 0;
    while(i < this->_elementos.size()) {
        if(this->_elementos[i] == e) {
            esta = true;
        }
        i++;
    }

    if(!esta) {
        this->_elementos.push_back(e);
        this->_cantidad_distintos++;
    } else {
        this->_elementos.push_back(e);
    }
}

void Multiconjunto::quitar(int e) {
    auto it = this->_elementos.begin();
    while(it != this->_elementos.end()) {
        if(*it == e) {
            this->_elementos.erase(it);
        } else {
            it++;
        }
    }
    this->_cantidad_distintos--;
}

int Multiconjunto::contar_apariciones(int e) const {
    int i = 0;
    int cant = 0;

    while(i < this->_elementos.size()) {
        if(this->_elementos[i] == e) {
            cant++;
        }
        i++;
    }

    return cant;
}

int Multiconjunto::cardinal() const {
    return this->_elementos.size();
}

int Multiconjunto::cantidad_elementos_distintos() const {
    return this->_cantidad_distintos;
}