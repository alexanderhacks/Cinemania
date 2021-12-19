// #include "Usuario.h"

#include<fstream>
#include<string>
#include<iostream>
#include "FLoader.h"
#include "Usuario.h"
using namespace std;

class ab{
    public:
    ab(){id++;}
    int gg(){return ab::id;}
    private:
    static int id;
};

int main(){
    FLoaderUsuario Clientes("cCliente.csv");
    FLoaderUsuario Administradores("cAdmin.csv");

    ab t1();
    t1.gg();

    // Clientes.CargarArchivo();
    // Administradores.CargarArchivo();
    // cout<<*Clientes.getObjetos()[0];
    // cout<<Clientes.getObjetos().size();

    // Clientes.getObjetos()[]

}  