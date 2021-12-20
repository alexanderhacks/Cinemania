#ifndef Funcion_h
#define Funcion_h

#include<string>
#include<thread>
#include<chrono>   
#include<ctime> 
#include<fstream>
#include<iostream>
#include<sstream>
#include"Pelicula.h"
#include"Sala.h"

using namespace std;

class Funcion{
    public:
    Funcion(const Pelicula &_peli, const Sala& _salaobj);

    thread StreamThread();

    friend ostream& operator<<(ostream& os, Funcion f);
    
    private:
    void Stream();
    Pelicula peli;
    Sala salaobj;
};

#endif