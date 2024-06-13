#include "Ejercicio3.h"

Usuario::Usuario(string nombre, int edad) {
    this->_nombre = nombre;
    this->_edad = edad;
    this->_amigos = {};
    this->_es_popular = false;
}

string Usuario::nombre() const {
    return this->_nombre;
}

int Usuario::edad() const {
    return this->_edad;
}

void Usuario::agregar_amigo(string nombre) {
    this->_amigos.insert(nombre);
}

bool Usuario::es_amigo(string nombre) const {
    for(auto it = _amigos.begin(); it != _amigos.end(); it++){
        if(*it == nombre){
            return true;
        }
    }
    return false;
}

bool Usuario::es_popular() const {
    if(this->_amigos.size() > 10) {
        return true;
    } else {
        return false;
    }
}