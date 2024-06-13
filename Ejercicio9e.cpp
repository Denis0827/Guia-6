#include "Ejercicio9e.h"

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
        int j = 0;
        while(j < ps[i].size()) {
            if(ps[i][j] == 'a' || ps[i][j] == 'e' || ps[i][j] == 'i' || ps[i][j] == 'o' || ps[i][j] == 'u') {
                this->_cant_vocales++;
            }
            j++;
        }
        i++;
    }
}

void Palabras::borrar_palabra(string p) {
    this->_cant_vocales = 0;

    auto it = this->_palabras.begin();
    while(it != this->_palabras.end()) {
        for(int j = 0; j < *it.size(); j++) {
            if(this->_palabras[i][j] == 'a' || this->_palabras[i][j] == 'e' || this->_palabras[i][j] == 'i' || this->_palabras[i][j] == 'o' || this->_palabras[i][j] == 'u') {
                this->_cant_vocales++;
            }
        }
        this->_palabras.erase(it);
    }
}

int Palabras::contar_vocales() const {
    return this->_cant_vocales;
}