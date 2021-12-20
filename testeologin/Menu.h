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
#include"Establecimiento.h"
#include"Compra.h"


using namespace std;

class Menu{
    public:
    
    Menu(vector<Establecimiento> _ests);

    void Bienvenida();
    
    // void crearFuncion();

    ~Menu();

    protected:
    void MenuAdmin();
    void LogIn();
    void SignUp();
    void LogAdmin();
    void credenciales();
    void comprarEntradas();
    void MenuCliente();
    void verPeliculas();
    void verCompras();
    void addCompra(Establecimiento _e, Funcion _f);

    void IniciarFuncion();
    void EjecutarFunciones(vector<Funcion>_funciones);
    void CrearFuncion();


    private:
    FLoaderUsuario Clientes = FLoaderUsuario("data/cCliente.csv");
    FLoaderUsuario Administradores = FLoaderUsuario("data/cAdmin.csv");
    FLoaderPelicula Peliculas = FLoaderPelicula("data/pelicula.csv");

    vector<thread> EjecucionesFuncion;

    vector<Establecimiento> ests;

    vector<Compra>Compras;

    stack<function<void(void)>> jerarquia;
    Usuario* select = nullptr;
};
