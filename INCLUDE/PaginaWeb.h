
#ifndef PAGINAWEB
#define PAGINAWEB

#include "Publicacion.h"
#include <string>

using namespace std;

class PaginaWeb : public virtual Publicacion{
	private:
		string URL;
		string ContenidoExtraido;
	public:
        	PaginaWeb();
        	PaginaWeb(string& url_, string& ContenidoExtraido_);   
        	virtual ~PaginaWeb(); 
		void setURL(string url);
    		void setcontenidoExtraido(string contenidoExtraido);		
    		string getURL();
    		string getcontenidoExtraido();
	    	virtual bool ContienePalabra(string& Palabra);
};

#endif
