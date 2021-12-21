#include "Funcion.h"

Pelicula Funcion::getPeli(){
    return peli;
}
Sala Funcion::getSala(){
    return salaobj;
}


Funcion::Funcion(vector<string> _args)
{    
    peli = Pelicula(_args[FuncionArgs::NOMBRE], _args[FuncionArgs::SCRIPT], stoi(_args[FuncionArgs::TIEMPO]));
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
    return thread(&Funcion::Stream, this);
}


void Funcion::Stream(){

    cout<<peli.getNombre();
    time_t actual;
    time(&actual);

    string tiempo_solo = ctime(&actual);

    string nombreArchivo = to_string(rand()%98)+peli.getNombre()+".mp4";
    fstream salida;
    salida.open(nombreArchivo, ios_base::out);
    for(int i=0; i<peli.getTiempo(); i++){
        salida<<tiempo_solo<<peli.getScriptPath()<<' ';
        if(i%9==0){
            salida<<'\n';
        }
        this_thread::sleep_for(1s);
    }

    salida.close();
}

