#pragma once
#include"Funcion.h"
#include"FLoader.h"
#include"Sala.h"
#include<vector>
#include<string>
#include<iostream>
#include"FLoader.h"
#include"Sala.h"



using namespace std;

class Establecimiento{
    public:
    Establecimiento()=default;
    Establecimiento(const string &_nombre, const string &_direccion, const vector<Sala>& _salas, string _path);
    void agregarFuncion(Funcion _funcion);

    string getNombres();
    string getDireccion();

    vector<Sala>getSalas();

    void verFunciones();

    friend ostream& operator<<(ostream &os, const Establecimiento& e );
    FLoaderFuncion Funciones;
    private:
    vector<Sala> Salas;
    string nombre, direccion;
};