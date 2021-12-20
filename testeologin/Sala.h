#pragma once

using namespace std;

class SalaEstructura{
    public:
    SalaEstructura()=default;
    SalaEstructura(const int &_aforo);
    int getAforo();
    protected:
    int aforo;
};

class Sala{
    public:
    Sala()=default;
    Sala(const int& _nro_sala, SalaEstructura* se);
    int getNroSala();
    private:
    int nro_sala;
    SalaEstructura* tipo;
};