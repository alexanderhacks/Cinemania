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
    Compra(Funcion _f, Establecimiento _e, Usuario _p);

    void verCompra();
    void imprimirCompra();

    friend ostream& operator<<(ostream& os, Compra& c);

    private:
    Usuario p;
    Funcion f;
    Establecimiento e;
};