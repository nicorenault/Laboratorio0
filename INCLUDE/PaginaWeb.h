
#ifndef PAGINAWEB
#define PAGINAWEB

#include "Publicacion.h"
#include <string>

using namespace std;

class PaginaWeb : public virtual Publicacion{
	private:
		string url;
		string ContenidoExtraido;
	public:
        	PaginaWeb();
        	PaginaWeb(string& url_, string& ContenidoExtraido_);   
        	virtual ~PaginaWeb(); 
		void setUrl(std::string url);
    		void setcontenidoExtraido(std::string contenidoExtraido);		
    		string getUrl();
    		string getcontenidoExtraido();
	    	virtual bool ContienePalabra(string& Palabra);
};

#endif
