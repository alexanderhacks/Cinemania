// #include "Usuario.h"

#include<fstream>
#include<string>
#include<iostream>
#include<sstream>
#include "FLoader.h"
#include "Usuario.h"
#include<thread>
#include "Funcion.h"
#include<functional>
using namespace std;


int main(){
    FLoaderPelicula pelis;
    pelis.CargarArchivo();


    cout<<*pelis.getObjetos()[2];

    // FLoaderUsuaro Clientes("cCliente.csv");

    // FLoaderUsuario Administradores("cAdmin.csv");

/*     Pelicula test("gaa", "TuMAMAMA", 5);
    Pelicula test2("gael", "Tupapapap", 5);
    Funcion fun1(test);
    Funcion fun2(test2);

    // function<void>ga = fun2.Stream();
    thread t1 = fun2.StreamThread();
    
    thread t2 = fun1.StreamThread();


    t1.join();
    t2.join(); */
    // Clientes.CargarArchivo();
    // Administradores.CargarArchivo();
    // cout<<*Clientes.getObjetos()[0];
    // cout<<Clientes.getObjetos().size();

    // Clientes.getObjetos()[]

}  