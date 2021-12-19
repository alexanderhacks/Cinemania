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
#include<algorithm>
#include<iterator>
#include"Menu.h"
using namespace std;


int main(){
 /*    FLoaderPelicula pelis;
    pelis.CargarArchivo();


    cout<<*pelis.getObjetos()[2]; */
    Menu ab;
    ab.Bienvenida();

     //Testeo menu
    // FLoaderUsuario Clientes("data/cCliente.csv");
    // cout<<Clientes.objetos.size();
    #if 0
    Clientes.CargarArchivo();
    vector<Usuario*> temps = Clientes.getObjetos();
    auto incorrecto = temps.end();
    do{
        string dni, clave;
        cout<<"Ingrese dni: ";
        cin>>dni;
        cout<<"Ingrese clave: ";
        cin>>clave;

        incorrecto = find_if(begin(temps), end(temps), [dni, clave](Usuario* usr){
            bool a = dni== usr->getDni(), b=clave==usr->getClave();
            return a&&b;
        });

    }while(incorrecto == temps.end());
    #endif

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