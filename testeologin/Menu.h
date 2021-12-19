#pragma once
#include<iostream>
#include<sstream>
#include<iterator>
#include<fstream>
#include"Utilidad.h"
#include"FLoader.h"

using namespace std;

class Menu{
    public:

    Menu();

    void Bienvenida();

    void LogIn();

    private:
    FLoaderUsuario Clientes = FLoaderUsuario("data/cCliente.csv");

};
