#pragma once
#include<iostream>
#include<sstream>
#include<iterator>
#include<fstream>
#include<functional>
#include<stack>
#include"Utilidad.h"
#include"FLoader.h"
#include<cstdlib>


using namespace std;

class Menu{
    public:

    Menu();

    void Bienvenida();
    
    // void crearFuncion();

    ~Menu();

    protected:
    void MenuAdmin();
    void LogIn();
    void SignUp();
    void LogAdmin();
    void credenciales();
    void MenuCliente();

    private:
    FLoaderUsuario Clientes = FLoaderUsuario("data/cCliente.csv");
    FLoaderUsuario Administradores = FLoaderUsuario("data/cAdmin.csv");
    FLoaderPelicula Peliculas = FLoaderPelicula("data/pelicula.csv");
    stack<function<void(void)>> jerarquia;
    Usuario* select = nullptr;
};
