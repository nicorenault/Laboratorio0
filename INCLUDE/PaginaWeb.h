
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
        	PaginaWeb(const string& url_, const string& ContenidoExtraido_);   
        	virtual ~PaginaWeb(); 
		void setUrl(std::string url);
    		void setcontenidoExtraido(std::string contenidoExtraido);		
    		string getUrl();
    		string getcontenidoExtraido();
	    	virtual bool ContienePalabra(const string& Palabra);
};

#endif
