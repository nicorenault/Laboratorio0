#ifndef DTREFER
#define DTREFER
#include "DTFecha.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class DTRefer {
    private:
        string doi;
        string titulo;
        DTFecha fecha;
        vector<std::string> autores; 
    public:
        DTRefer(string& doi_, string& titulo_, cDTFecha& fecha_);
        ~DTRefer();  
    
        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        int getNumAutores();
        vector<std::string> getAutores();
        friend std::ostream& operator<<(ostream& os, DTRefer& dt); // A esto se refiere la parte 2. Más eficiente la impresión del objeto

};
    
#endif
