#pragma once

#include"Establecimiento.h"
#include"FLoader.h"
#include"Pelicula.h"
#include"Funcion.h"
#include<string>
#include<iostream>


class Compra{
    public:
    Compra()=default;
    Compra(Funcion _f, Establecimiento _e);

    void verCompra();
    void imprimirCompra();

    friend ostream& operator<<(ostream& os, Compra& c);

    private:
    Funcion f;
    Establecimiento e;
};