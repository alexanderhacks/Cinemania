#include"Establecimiento.h"

vector<Sala> Establecimiento::getSalas(){
    return Salas;
}

Establecimiento::Establecimiento(const string &_nombre, const string &_direccion, const vector<Sala>& _salas, string _path)
:nombre(_nombre), direccion(_direccion), Salas(_salas){
    Funciones = FLoaderFuncion(_path);
    Funciones.CargarArchivo();
}

string Establecimiento::getNombres(){
    return nombre;
}
string Establecimiento::getDireccion(){
    return direccion;
}

void Establecimiento::agregarFuncion(Funcion _funcion){
    Funciones.objetos.push_back(new Funcion(_funcion));  
    Funciones.EscribirArchivo();
}

ostream& operator<<(ostream &os, const Establecimiento& e ){
    os<<"Nombre de Establecimiento: "<<e.nombre<<'\n';
    os<<"Direccion: "<<e.direccion<<'\n';
    return os;
}

void Establecimiento::verFunciones(){

    cout<<"Funciones en Cinemania - "<<nombre<<endl;
    cout<<"========"<<endl;
    for(int i = 0; i<Funciones.objetos.size(); i++){
        Funcion j= *Funciones.objetos[i];
        cout<<"Id de funcion: "<<i<<endl;
        cout<<"Pelicula a emitir: "<<j.getPelicula()<<endl;
    }
    cout<<"========\n"<<endl;
}