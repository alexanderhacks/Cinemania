#include "Compra.h"

Compra::Compra(Funcion _f, Establecimiento _e, Usuario _p):f(_f), p(_p), e(_e){}

Compra::~Compra(){}

ostream& operator<<(ostream& os, Compra& c){
    ifstream archivo("res/tBoleta.txt");
    string line;

    if(archivo.is_open()){
        int i=1;
        while(getline(archivo, line)){
            os<<line<<endl;
            if(i==10) {
                os<<"Nro de sala: "<<c.f.getNroSala()<<"\n";
                os<<"Pelicula a ver: "<<c.f.getPelicula()<<"\n";
            }
            else if(i==14){
                os<<"Establecimiento a asistir: "<<c.e.getNombres()<<"\n";
                os<<"Direccion: "<<c.e.getDireccion()<<"\n";
            }
            i++;
        }

        os<<c.p;
    }
    archivo.close();
    return os;
}