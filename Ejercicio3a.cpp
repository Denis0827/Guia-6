#include "Ejercicio3.h"

Fecha::Fecha(int dia, int mes, int anio) {
    this->_dia = dia;
    this->_mes = mes;
    this->_anio = anio;
}

void Fecha::avanzar_dia() {
    if(this->_dia != 31) {
        this->_dia++;
    } else {
        if(this->_mes != 12) {
            this->_dia = 1;
            this->_mes++;
        } else {
            this->_dia = 1;
            this->_mes = 1;
            this->_anio++;
        }
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
    return this->_dia;
}


int Fecha::mes() const {
    return this->_mes;
}


int Fecha::anio() const {
    return this->_anio;
}


bool Fecha::operator==(const Fecha& f) const {
    return this->_dia == f.dia() && this->_mes == f.mes() && this->_anio == f.anio();
}