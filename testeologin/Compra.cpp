#include "Compra.h"

Compra::Compra(Funcion _f, Establecimiento _e):f(_f), e(_e){}

ostream& operator<<(ostream& os, Compra& c){
    ifstream archivo("res/tBoleta.txt");
    string line;

    if(archivo.is_open()){
        int i=1;
        while(getline(archivo, line)){
            cout<<line;
            if(i==6) {
                os<<"Nro de sala: "<<c.f.getNroSala()<<'\n';
                os<<"Pelicula a ver: "<<c.f.getPelicula()<<'\n';
            }
            else if(i==14){
                os<<"Establecimiento a asistir: "<<c.e.getNombres()<<'\n';
                os<<"Direccion: "<<c.e.getDireccion()<<'\n';
            }
            i++;
        }
    }
    archivo.close();
    return os;
}