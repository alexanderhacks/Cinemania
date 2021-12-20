
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
    Establecimiento("Miraflores", "Ca. Tomas Valle 435", SEst3,"data/apts/e3Funcion.csv")
};



int main(){
    Menu ab(Ests);
    ab.Bienvenida();

    return 0;
}