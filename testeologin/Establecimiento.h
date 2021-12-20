#pragma once
#include"Funcion.h"
#include"REstatico.h"
#include<vector>
#include<string>
#include<iostream>
#include"FLoader.h"

using namespace std;

class Establecimiento{
    public:
    Establecimiento()=default;
    Establecimiento(const string &_nombre, const string &_direccion, const vector<Sala>& _salas);
    void agregarFuncion(const Funcion &_funcion);

    void verFunciones();

    friend ostream& operator<<(ostream &os, const Establecimiento& e );
    private:
    vector<Funcion>Funciones;
    vector<Sala>Salas;
    string nombre, direccion;
};