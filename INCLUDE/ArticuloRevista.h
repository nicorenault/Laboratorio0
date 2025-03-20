#ifndef ARTICULOREVISTA
#define ARTICULOREVISTA

#include "Publicacion.h"
#include <string>
using namespace std;


class ArticuloRevista : public Publicacion{
	private:
		string Revista;
		string Extracto;
	public:
        	ArticuloRevista(const string& DOI_, const string& titulo_, const DTFecha& fecha_, string& Revista_, string& Extracto_);
        	virtual ~ArticuloRevista();    
		void setRevista(string revista);
    		void setExtracto(string extracto);
   		string getRevista();
   	 	string getExtracto();
		virtual bool ContienePalabra(string& Palabra);
};


#endif
