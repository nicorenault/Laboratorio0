#include <iostream>
#include <list>
#include <map>
#include "DTFecha.h"
#include "ArticuloRevista.h"
#include "Libro.h"
#include "PaginaWeb.h"
#include "Investigador.h"
#include "DTRefer.h"

using namespace std;


std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}


void parte_a(){
        ArticuloRevista* articulo1 = new ArticuloRevista(
        "10.1234/abc123", 
        "Fundamentos de POO", 
        DTFecha(15, 5, 2023), 
        "Programacion Avanzada", 
        "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo."
    );
    
    ArticuloRevista* articulo2 = new ArticuloRevista(
        "10.4567/jkl012", 
        "Utilidad de diagramas UML", 
        DTFecha(10, 2, 2024), 
        "Modelado de Software", 
        "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases."
    );
}

void parte_b(){
    Libro* libro1 = new Libro(
        "10.2345/def456",        
        "Patrones de Diseno en c++", 
        DTFecha(20, 8, 2022),    
        "Software Design",       
        // Palabras clave
    );  
    Libro* libro2 = new Libro(
        "10.5678/mno345", 
        "Guia de UML", 
        DTFecha(20,8,2022),  
        "IEEE", 
    //no se como se hace lo de vector de palabras clave
    };

  
  
}

void parte_c(){
    PaginaWeb* pagina = new PaginaWeb(
        "10.3456/ghi789", 
        "Diagramas para Principiantes", 
        DTFecha(20,10,2024), 
        "www.umlparaprincipiantes.com", 
        "En esta pagina web se presenta una guia completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades."
    );
}

void parte_d(){
    
}

void parte_e(){
    Investigador* investigador1 = new Investigador(
        "0000-0003-1234-5678",
        "Carla Oliveri",
        "Universidad de la Republica"
    );

    Investigador* investigador2 = new Investigador(
        "0000-0001-8765-4321",
        "Alberto Santos",
        "Instituto Tecnico"
    );
}

void parte_f(){
    cout << investigador1.toString()<<endl;
    cout << investigador1.toString()<<endl;
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}


int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}
