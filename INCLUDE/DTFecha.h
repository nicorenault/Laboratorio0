#ifndef DTFECHA
#define DTFECHA

class DTFecha {
private:
    int dia;
    int mes;
    int anio;
public:
    DTFecha(int d, int m, int a);
    DTFecha();
    ~DTFecha();  
    // un comparador de fechas nos va a servir para mas adelante
    bool operator >(const DTFecha& other);

};

#endif