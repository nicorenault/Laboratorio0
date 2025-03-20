#include "PaginaWeb.h"
#include <iostream>

// Constructor
PaginaWeb::PaginaWeb(const string& doi, const string& titulo, const string& fecha, const string& url, const string& contenidoExtraido)
    : Publicacion(doi, titulo, fecha), URL(url), ContenidoExtraido(contenidoExtraido) {}

// Destructor
PaginaWeb::~PaginaWeb() {}

// Getters
string PaginaWeb::getURL() const { 
    return URL; 
}

string PaginaWeb::getContenidoExtraido() const { 
    return ContenidoExtraido; 
}

// Setters
void PaginaWeb::setURL(const string& url) { 
    this->URL = url; 
}

void PaginaWeb::setContenidoExtraido(const string& contenidoExtraido) { 
    this->ContenidoExtraido = contenidoExtraido; 
}
