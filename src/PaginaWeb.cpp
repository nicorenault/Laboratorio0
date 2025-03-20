#include "PaginaWeb.h"
#include <iostream>

// Constructor
PaginaWeb::PaginaWeb(string& d, string& t, string& f, string& u, string& ce){
    Publicacion.doi = d;
    Publicacion.titulo = t;
    Publicacion.fecha = f; 
    URL = u; 
    ContenidoExtraido = ce; 
}

// Destructor
PaginaWeb::~PaginaWeb() {
}

// Getters
string PaginaWeb::getURL() { 
    return URL; 
}

string PaginaWeb::getContenidoExtraido() { 
    return ContenidoExtraido; 
}

// Setters
void PaginaWeb::setURL(string& url) { 
    this->URL = url; 
}

void PaginaWeb::setContenidoExtraido(string& contenidoExtraido) { 
    this->ContenidoExtraido = contenidoExtraido; 
}

bool PaginaWeb::ContienePalabra(string& palabra) {
    size_t pos = 0, found;
    while ((found = this->ContenidoExtraido.find(' ', pos)) != string::npos) { //find busca los espacios
        if (this->ContenidoExtraido.substr(pos, found - pos) == palabra) { // substr extrae la palabra que se encuentra entre pos y found
            return true; // la palabra coincide
        }
        pos = found + 1; // se mueve al siguiente caracter despues del espacio
    }
    return (this->ContenidoExtraido.substr(pos) == palabra); // ultima palabra
}
