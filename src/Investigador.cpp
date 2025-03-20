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
string Investigador::getORCID(){ 
    return ORCID; 
}

string Investigador::getNombre(){ 
    return Nombre; 
}

string Investigador::getInstitucion(){ 
    return Institucion; 
}

vector<Publicacion*> Investigador::getPublicaciones(){ 
    return Publicaciones; 
}

// Setters
void Investigador::setORCID(string& orcid) { 
    this->ORCID = orcid; 
}

void Investigador::setNombre(string& nombre) { 
    this->Nombre = nombre; 
}

void Investigador::setInstitucion(string& institucion) { 
    this->Institucion = institucion; 
}

//Funciones

string Investigador::toString(){
    return ORCID + "->" + nombre + "/" + institucion;
}





