#pragma once

#include"Establecimiento.h"
#include"FLoader.h"
#include"Pelicula.h"
#include"Funcion.h"
#include<string>
#include<iostream>
#include<cstdlib>


class Compra{
    public:
    Compra()=default;
    Compra(Establecimiento _e, Usuario _p); 
    virtual ~Compra();
    
    protected:
    Usuario p; // Permitira la salida de datos del usuario que haya iniciado sesión
    Establecimiento e; // Permitira la salida de datos para la 
};

class CompraEntrada: public Compra{
    public:
    CompraEntrada()=default;
    CompraEntrada(Funcion _f, Establecimiento _e, Usuario _p);
    ~CompraEntrada();

    friend ostream& operator<<(ostream& os, CompraEntrada& c);
    private:
    Funcion f;
};