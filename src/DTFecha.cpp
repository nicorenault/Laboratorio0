#include "DTFecha.h"

// Constructor con parámetros
DTFecha::DTFecha(int d, int m, int a){
    dia = d;
    mes = m;
    anio = a;
}

// Destructor
DTFecha::~DTFecha() {
}

// Getters
void DTFecha::getDia(int d) {
    this->dia = d;
}

void DTFecha::getMes(int a) {
    this->mes = m;
}

void DTFecha::getAnio(int a) {
    this->anio = a;
}

//
