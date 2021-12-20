#include "FLoader.h"

FLoaderFuncion::FLoaderFuncion(){}
FLoaderFuncion::FLoaderFuncion(const string &_path):FLoader(_path){}
vector<string> FLoaderFuncion::juntarPalabras(){
    vector<string> result;

    for(auto i :objetos){
        string csv_u = (*i)[0]+ ","+(*i)[1];
        result.push_back(csv_u);
    }

    return result;
}
void FLoaderFuncion::asignarObjetos(const vector<string>&_lineas){
    for(auto st: _lineas){
        stringstream linea(st);
        string componente;
        vector<string> args;
        while (getline(linea, componente,',')){
            args.push_back(componente);
        }
        objetos.push_back(new vector<string>{args[0], args[1]});
    }
}

FLoaderUsuario::FLoaderUsuario(const string &_path):FLoader(_path){}
FLoaderPelicula::FLoaderPelicula(const string &_path):FLoader(_path){}
FLoaderUsuario::FLoaderUsuario(){}
vector<string> FLoaderUsuario::juntarPalabras(){
    vector<string> result;

    for(auto i :objetos){
        string csv_u{i->getNombre() + "," + i->getApellido() + "," + i->getDni() + "," + i->getClave()};
        result.push_back(csv_u);
    }

    return result;
}

void FLoaderUsuario::asignarObjetos(const vector<string>&_lineas){

    for(auto st: _lineas){
        stringstream linea(st);
        string componente;
        vector<string> args;
        while (getline(linea, componente,',')){
            args.push_back(componente);
        }
        // cout<<Usuario(args[0], args[1], args[2], args[3]);
        objetos.push_back(new Usuario(args[0], args[1], args[2], args[3]));
        // cout<<objetos.size();
    }

}

FLoaderPelicula::FLoaderPelicula():FLoader("data/pelicula.csv"){}

vector<string> FLoaderPelicula::juntarPalabras(){
    vector<string> result;

    for(auto i :objetos){
        string csv_u{i->getNombre() + "," + to_string(i->getTiempo())+ "," + i->getScriptPath()};
        result.push_back(csv_u);
    }

    return result;
}

void FLoaderPelicula::asignarObjetos(const vector<string>&_lineas){
    
    for(auto st: _lineas){
        stringstream linea(st);
        string componente;
        vector<string> args;
        while (getline(linea, componente,',')){
            args.push_back(componente);
        }
        // cout<<Usuario(args[0], args[1], args[2], args[3]);
        objetos.push_back(new Pelicula(args[0], args[2] , stoi(args[1])));
        // cout<<objetos.size();
    }
}