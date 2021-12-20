// #include "Usuario.h"

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

    vector<SalaEstructura> salest  ={
    SalaEstructura(40),
    SalaEstructura(35),
    SalaEstructura(60),
    SalaEstructura(55),
    SalaEstructura(78)
};

    vector<Sala> SEst1 = {
        Sala(1, salest[0]),
        Sala(2, salest[3]),
        Sala(3, salest[1]),
        Sala(4, salest[0]),
        Sala(5, salest[4]),
        Sala(6, salest[2])
    };

    vector<Sala> SEst2 = {
        Sala(1, salest[0]),
        Sala(2, salest[2]),
        Sala(3, salest[1]),
        Sala(4, salest[2])
};

    vector<Sala> SEst3 = {
        Sala(1, salest[4]),
        Sala(2, salest[4]),
        Sala(3, salest[1]),
        Sala(4, salest[1]),
        Sala(5, salest[0]),
        Sala(6, salest[2])
    };

    vector<Establecimiento> Ests =  {
    Establecimiento("Canhete", "Av. Tobias Prado 123", SEst1, "data/apts/e1Funcion.csv"),
    Establecimiento("Surco", "Jr. Andres Veridico 333", SEst2,"data/apts/e2Funcion.csv"),
    Establecimiento("Surco", "Ca. Tomas Valle 435", SEst3,"data/apts/e3Funcion.csv")
};



int main(){
 /*    FLoaderPelicula pelis;
    pelis.CargarArchivo();

    
    cout<<*pelis.getObjetos()[2]; */
    // Ests[0].verFunciones();
    Menu ab(Ests);
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