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
    ~Compra();


    friend ostream& operator<<(ostream& os, Compra& c); // Permite la salida para las opciones de ver compras e imprimir compras

    private:
    Usuario p; // Permitira la salida de datos del usuario que haya iniciado sesión
    Funcion f; // Permitira la salida de datos de la funcion a la que se haya seleccionado
    Establecimiento e; // Permitira la salida de datos para la 
};