#include "Investigador.h"
#include <iostream>

// Constructor
Investigador::Investigador(const string& orcid, const string& nombre, const string& institucion){
    ORCID = orcid;
    Nombre = nombre;
    Institucion = institucion;
}

// Destructor
Investigador::~Investigador() {}

// Getters
string Investigador::getORCID() const { 
    return ORCID; 
}

string Investigador::getNombre() const { 
    return Nombre; 
}

string Investigador::getInstitucion() const { 
    return Institucion; 
}

vector<Publicacion*> Investigador::getPublicaciones() const { 
    return Publicaciones; 
}

// Setters
void Investigador::setORCID(const string& orcid) { 
    this->ORCID = orcid; 
}

void Investigador::setNombre(const string& nombre) { 
    this->Nombre = nombre; 
}

void Investigador::setInstitucion(const string& institucion) { 
    this->Institucion = institucion; 
}
