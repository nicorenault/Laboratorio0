#ifndef PUBLICACION_H
#define PUBLICACION_H

#include "DTFecha.h"
#include "DTRefer.h"
#include <string>
#include <vector>

using namespace std;

class Investigador; // Declaración adelantada para evitar dependencias circulares (ni idea lo dijo chat)

class Publicacion{
	private:
		string DOI;
		string titulo;
		DTFecha fecha;
		vector<Investigador*> autores;
	public:
        	Publicacion(string& DOI_, string& titulo_, DTFecha& fecha_);
        	virtual ~Publicacion();
		DTRefer getDT();
	 	void setDoi(string doi);
    		void setTitulo(string titulo);
   		void setFecha(DTFecha fecha);
		string getDoi();
   		string getTitulo()
   		DTFecha getFecha();
		virtual bool ContienePalabra(string Palabra);
};

#endif
