#include"Sala.h"



SalaEstructura::SalaEstructura(const int &_aforo)
:aforo(_aforo){}

int SalaEstructura::getAforo(){return aforo;}

Sala::Sala(const int& _nro_sala, SalaEstructura se)
:nro_sala(_nro_sala), tipo(se){
}

int Sala::getNroSala(){return nro_sala;}

Sala::Sala(const int& _nro_sala, const int&_aforo):nro_sala(_nro_sala){
    tipo = SalaEstructura(_aforo);
}

int Sala::getAforo(){
    return tipo.getAforo();
}

ostream& operator<<(ostream& os, Sala s){
    os<<"Nro Sala: "<<s.nro_sala<<'\n';
    os<<"Aforo: "<<s.getAforo()<<'\n';
    return os;
}

Sala::~Sala(){}

SalaEstructura::~SalaEstructura(){}