#include"Sala.h"

SalaEstructura::SalaEstructura(const int &_aforo)
:aforo(_aforo){}

int SalaEstructura::getAforo(){return aforo;}

Sala::Sala(const int& _nro_sala, SalaEstructura* se)
:nro_sala(_nro_sala), tipo(se){
}

int Sala::getNroSala(){return nro_sala;}