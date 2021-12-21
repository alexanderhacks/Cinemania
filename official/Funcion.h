#ifndef Funcion_h
#define Funcion_h

#include <string>
#include <thread>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Pelicula.h"
#include "Sala.h"
#include <vector>
#include <cstdlib>

using namespace std;

enum FuncionArgs
{
    NOMBRE = 0,
    NRO_SALA,
    SCRIPT,
    TIEMPO,
    AFORO
};

class Funcion
{
public:
    Funcion() = default;
    Funcion(vector<string> _args);
    Funcion(const Pelicula &_peli, const Sala &_salaobj);
    ~Funcion();

    thread StreamThread();
    int getNroSala();
    string getPelicula();
    Pelicula getPeli();
    Sala getSala();

    friend ostream &operator<<(ostream &os, Funcion f);

private:
    void Stream();
    Pelicula peli;
    Sala salaobj;
};

#endif