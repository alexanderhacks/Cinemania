#include "Funcion.h"

Pelicula Funcion::getPeli(){
    return peli;
}
Sala Funcion::getSala(){
    return salaobj;
}


Funcion::Funcion(vector<string> _args)
{    
    peli = Pelicula(_args[FuncionArgs::SCRIPT], _args[FuncionArgs::NRO_SALA], stoi(_args[FuncionArgs::TIEMPO]));
    salaobj = Sala( stoi(_args[FuncionArgs::NRO_SALA]), stoi(_args[FuncionArgs::AFORO]) );
}

ostream& operator<<(ostream& os, Funcion f){
    os<<f.peli.getNombre()<<','<<f.salaobj.getNroSala()<<','<<f.peli.getScriptPath()<<','<<f.peli.getTiempo()<<','<<f.salaobj.getAforo()<<'\n';
    return os;
}

int Funcion::getNroSala(){return salaobj.getNroSala();}
string Funcion::getPelicula(){return peli.getNombre();}

Funcion::Funcion(const Pelicula &_peli, const Sala& _salaobj)
:peli(_peli), salaobj(_salaobj){}


thread Funcion::StreamThread(){
    return thread([=]{Stream();});
}


void Funcion::Stream(){

    time_t actual;
    time(&actual);

    string tiempo_solo = ctime(&actual);

    
    istringstream tiempoString(tiempo_solo.substr(0,22));

    string titulo="", comp, titulo1="";
    while(getline(tiempoString,comp, ' ')){
        titulo+=comp;
    }

    tiempoString = istringstream(titulo);
    while(getline(tiempoString,comp, ':')){
        titulo1+=comp;
    }

    fstream salida;
    salida.open(peli.getNombre()+titulo1+".mp4", ios_base::out);
    for(int i=0; i<peli.getTiempo(); i++){
        salida<<peli.getScriptPath()<<' ';
        if(i%9==0){
            salida<<'\n';
        }
        this_thread::sleep_for(1s);
    }

    salida.close();
}

