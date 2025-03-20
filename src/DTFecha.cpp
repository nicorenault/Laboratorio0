#include "DTFecha.h"

DTFecha::DTFecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

// Getters
int DTFecha::getDia() const {
    return dia;
}

int DTFecha::getMes() const {
    return mes;
}

int DTFecha::getAnio() const {
    return anio;
}
 
// Setters
void DTFecha::setDia(int d) { 
    this->dia = d; 
}

void DTFecha::setMes(int m) { 
    this->mes = m; 
}

void DTFecha::setAnio(int a) { 
    this->anio = a; 
}
