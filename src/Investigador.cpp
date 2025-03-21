#include "Investigador.h"
#include <iostream>

// Constructor
Investigador::Investigador(string& ORCID, string& nombre, string& institucion){
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

vector<string> Investigador::ListarPublicaciones(DTFecha desde, string palabra){
    vector<string> resultado;
    for (Publicacion *pub : publicaciones){
        if (pub->getFecha() > desde){
            if (pub->contienePalabra(palabra)){
                resultado.push_back(pub->getDOI())
            }
        } 
    }
    return resultado;
}



