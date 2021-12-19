#include "Funcion.h"

Pelicula::Pelicula(const string &_nombre, const string &_script, const int &_tiempo)
:nombre(_nombre), script_path(_script), tiempo(_tiempo){

}

string Pelicula::getScriptPath(){return script_path;}
string Pelicula::getNombre(){return nombre;}
int Pelicula::getTiempo(){return tiempo;}


Funcion::Funcion(const Pelicula &_peli):peli(_peli){}
thread Funcion::StreamThread(){
    return thread([=]{Stream();});
}
void Funcion::Stream(){

    time_t actual;
    time(&actual);

    string tiempo_solo = ctime(&actual);

    
    istringstream tiempoString(tiempo_solo.substr(0,22));

    string titulo="", comp, titulo1="";
    while(getline(tiempoString,comp, ' ')){
        titulo+=comp;
    }

    tiempoString = istringstream(titulo);
    while(getline(tiempoString,comp, ':')){
        titulo1+=comp;
    }

    fstream salida;
    salida.open(peli.getNombre()+titulo1+".mp4", ios_base::out);
    for(int i=0; i<peli.getTiempo(); i++){
        salida<<peli.getScriptPath()<<' ';
        if(i%9==0){
            salida<<'\n';
        }
        this_thread::sleep_for(1s);
    }

    salida.close();
}