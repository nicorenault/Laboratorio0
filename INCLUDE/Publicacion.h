#ifndef PUBLICACION_H
#define PUBLICACION_H

#include "DTFecha.h"
#include "DTRefer.h"
#include <string>

using namespace std;

class Publicacion{
	private:
		string DOI;
		string titulo;
		DTFecha fecha;
	public:
        Publicacion(const string& DOI_, const string& titulo_, const DTFecha& fecha_);
        virtual ~Publicacion();
		DTRefer getDT();
		virtual bool ContienePalabra(string Palabra);
};

#endif