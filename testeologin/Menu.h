#pragma once
#include<iostream>
#include<sstream>
#include<iterator>
#include<fstream>
#include<functional>
#include<stack>
#include"Utilidad.h"
#include"FLoader.h"


using namespace std;

class Menu{
    public:

    Menu();

    void Bienvenida();

    void LogIn();
    void SignUp();

    ~Menu();

    private:
    FLoaderUsuario Clientes = FLoaderUsuario("data/cCliente.csv");
    stack<function<void(void)>> jerarquia;
    Usuario* select = nullptr;
};
