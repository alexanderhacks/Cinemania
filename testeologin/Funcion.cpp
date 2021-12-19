#include "Funcion.h"

Pelicula::Pelicula(const string &_nombre, const string &_script, const int &_tiempo)
:nombre(_nombre), script_path(_script), tiempo(_tiempo){

}

string Pelicula::getScriptPath(){return script_path;}
string Pelicula::getNombre(){return nombre;}
int Pelicula::getTiempo(){return tiempo;}


Funcion::Funcion(const Pelicula &_peli):peli(_peli){}
void Funcion::Stream(){

    ofstream salida;

}