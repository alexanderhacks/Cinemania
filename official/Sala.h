#pragma once
#include<iostream>
using namespace std;

class SalaEstructura{
    public:
    SalaEstructura()=default;
    SalaEstructura(const int &_aforo);
    ~SalaEstructura();
    int getAforo();
    protected:
    int aforo;
};

class Sala{
    public:
    Sala()=default;
    Sala(const int& _nro_sala, const int&_aforo);
    Sala(const int& _nro_sala, SalaEstructura se);
    ~Sala();

    friend ostream& operator<<(ostream& os, Sala s);
    int getNroSala();
    int getAforo();
    private:
    int nro_sala;
    SalaEstructura tipo;
};