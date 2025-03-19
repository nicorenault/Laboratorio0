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
        	ArticuloRevista(const string& Revista_, const string& Extracto_);
        	virtual ~ArticuloRevista();    
		void setRevista(string revista);
    		void setExtracto(string extracto);
   		string getRevista();
   	 	string getExtracto();
		virtual bool ContienePalabra(string& Palabra);
};


#endif
