#include"Pelicula.h"

Pelicula::Pelicula(const string &_nombre, const string &_script, const int &_tiempo)
:nombre(_nombre), script_path(_script), tiempo(_tiempo){

}
Pelicula::~Pelicula(){}

string Pelicula::getScriptPath(){return script_path;}
string Pelicula::getNombre(){return nombre;}
int Pelicula::getTiempo(){return tiempo;}

ostream& operator<<(ostream &os, const Pelicula &p){
    os<<"Nombre de pelicula: "<<p.nombre<<'\n';
    os<<"Duracion: "<<p.tiempo*0.16<<" horas"<<'\n';

    return os;
}