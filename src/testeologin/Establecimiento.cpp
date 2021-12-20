#include"Establecimiento.h"

Establecimiento::Establecimiento(const string &_nombre, const string &_direccion, const vector<Sala>& _salas)
:nombre(_nombre), direccion(_direccion), Salas(_salas){}

void Establecimiento::agregarFuncion(const Funcion &_funcion){
    Funciones.push_back(_funcion);  
}

ostream& operator<<(ostream &os, const Establecimiento& e ){
    os<<"Nombre de Establecimiento: "<<e.nombre<<'\n';
    os<<"Direccion: "<<e.direccion<<'\n';
    return os;
}

void Establecimiento::verFunciones(){
    for(auto i: Funciones){
        cout<<i<<endl;
    }
}