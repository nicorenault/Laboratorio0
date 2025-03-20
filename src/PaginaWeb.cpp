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

bool contienePalabra (string& palabra){
    
}
