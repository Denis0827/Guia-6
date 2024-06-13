#include "Ejercicio5.h"

Fecha::Fecha(int dia_del_anio, int anio) {
    this->_dia_del_anio = dia_del_anio;
    this->_anio = anio;
}

void Fecha::avanzar_dia() {
    if(this->_dia_del_anio != 372) { // suponiendo que todos los meses tienen 31 dias
        this->_dia_del_anio++;
    } else {
        this->_anio++;
        this->_dia_del_anio++;
    }
}

void Fecha::avanzar_n_dias(int n) {
    int i = 0;
    while(i < n) {
        this->avanzar_dia();
        i++;
    }
}

int Fecha::dia() const {
    int dia = this->_dia_del_anio % 31;
    return dia;
}

int Fecha::mes() const {
    int mes = this->_dia_del_anio / 31;
    return mes;
}

int Fecha::anio() const {
    return this->_anio;
}

bool Fecha::operator==(const Fecha& f) const {
    return this->_dia_del_anio == (f.mes() * 31 + f.dia()) && this->_anio == f.anio();
}