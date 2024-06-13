#include "Ejercicio6.h"

void Conjunto::agregar(int e) {
    int i = 0;
    bool esta = false;
    while(i < this->_elementos.size()) {
        if(this->_elementos[i] == e) {
            esta = true;
        } 
    }

    if(esta) {
        _elementos.push_back(e);
    }
}

void Reservas::cancelar_reserva(string nombre){
    if(this->_es_premium[nombre] == true) {
        this->_cantidad_premium--;
    }
    _listado.erase(nombre);
    _es_premium.erase(nombre);
}

void Examenes::agregar_examen(string nombre_alumno, int nota){
    _notas_por_alumno[nombre_alumno] = nota;
    if(nota >= 4) {
        this->_alumnos_aprobados.insert(nombre_alumno);
    }
}

void Inmobiliaria::cambiar_a_no_disponible(string direccion){
    _casas_todas[direccion] = false;
    this->_casas_disponibles.erase(direccion);
    this->_casas_no_disponibles.insert(direccion);
}