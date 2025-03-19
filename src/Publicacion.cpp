#include <string>
#include <vector>
#include "../../include/clases/Publicacion.h"
#include "Investigador.h"

using namespace std;

// Constructor por defecto
Publicacion::Publicacion() {
}

// Constructor con parámetros
Publicacion::Publicacion(string d, string t, DTFecha f) {
   doi = d;
   titulo = t;
   fecha = f;
}

// Destructor
Publicacion::~Publicacion() {
}

// Setters
void Publicacion::setDoi(std::string d) {
    this->doi = d;
}
void Publicacion::setTitulo(std::string t) {
    this->titulo = t;
}
void Publicacion::setFecha(DTFecha f) {
    this->fecha = f;
}

// Getters
string Publicacion::getDoi() {
    return doi;
}
string Publicacion::getTitulo() {
    return titulo;
}
DTFecha Publicacion::getFecha() {
    return fecha;
}

// Agregar autor a la lista de autores
void Publicacion::agregarAutor(Investigador* autor) {
    //hacer
}

// Obtener un DTRefer con la información de la publicación
DTRefer Publicacion::getDT() {
   //hacer
}


