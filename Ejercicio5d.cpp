#include "Ejercicio5.h"

Carrito::Carrito(int peso_maximo) {
    this->_peso_maximo = peso_maximo; 
    this->_peso_total = 0;
    this->_pesos_items;
    this->_precios_por_item;
}

int Carrito::peso_disponible() const {
    return this->_peso_maximo - this->_peso_total;
}

bool Carrito::buscar_item(string nombre) const {
    int i = 0;
    bool res = false;

    for(auto it = this->_pesos_items.begin(); it != this->_pesos_items.end(); it++) {
        if(it->first == nombre) {
            res = true;
        }
    }

    return res;
}

int Carrito::peso_de_item(string nombre) const {
    int peso;
    for(auto it = this->_pesos_items.begin(); it != this->_pesos_items.end(); it++) {
        if(it->first == nombre) {
            peso = it->second;
        }
    }
    return peso;
}

int Carrito::precio_de_item(string nombre) const {
    int precio;
    for(auto it = this->_precios_por_item.begin(); it != this->_precios_por_item.end(); it++) {
        if(it->first == nombre) {
            precio = it->second;
        }
    }
    return precio;
}

void Carrito::borrar_item(string nombre) {
    auto it = this->_pesos_items.find(nombre); 
    this->_peso_total -= it->second;
    this->_pesos_items.erase(it); 

    auto it2 = this->_precios_por_item.find(nombre); 
    this->_precios_por_item.erase(it2); 
}

void Carrito::agregar_item(string nombre, int peso, float precio) {
    this->_pesos_items[nombre] = peso;
    this->_precios_por_item[nombre] = precio;
    this->_peso_total += peso;
}
    
float Carrito::monto_total() const {
    int cant = 0;
    for(auto it = this->_precios_por_item.begin(); it != this->_precios_por_item.end(); it++) {
        cant += it->second;
    }
    return cant;
}