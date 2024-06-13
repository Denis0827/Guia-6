#include "Ejercicio9.h"

Palabras::Palabras() {
    this->_palabras;
}

bool Palabras::contiene(string p) const {
    int i = 0;
    bool res = false;
    while(i < this->_palabras.size()) {
        if(this->_palabras[i] == p) {
            res = true;
        }
        i++;
    }
    return res;
}

void Palabras::agregar_palabras(vector<string> ps) {
    int i = 0;
    while(i < ps.size()) {
        this->_palabras.push_back(ps[i]);
        i++;
    }
}

void Palabras::borrar_palabra(string p) {
    auto it = this->_palabras.begin();

    while(it != this->_palabras.end()) {
        if(*it == p) {
            this->_palabras.erase(it);
        } else {
            it++;
        }
    }
}

int Palabras::contar_vocales() const {
    int i = 0;
    int cant = 0;

    while(i < this->_palabras.size()) {
        int j = 0;
        while(j < this->_palabras[i].size()) {
            if(this->_palabras[i][j] == 'a' || this->_palabras[i][j] == 'e' || this->_palabras[i][j] == 'i' || this->_palabras[i][j] == 'o' || this->_palabras[i][j] == 'u') {
                cant++;
            }
            j++;
        }
        i++;
    }

    return cant;
}