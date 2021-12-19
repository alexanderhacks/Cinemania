#ifndef FLoader_h
#define FLoader_h

#include<string>
#include<fstream>
#include<vector>
#include"Usuario.h"
#include<string>
#include<sstream>

using namespace std;

template<typename objeto>
class FLoader{

    public:
    FLoader(const string &_path): path(_path){}
    virtual ~FLoader(){}

    void CargarArchivo(){
        vector<string>lineas = this->cargarLineas();
        this->asignarObjetos(lineas);
    }

    void EscribirArchivo(){
        vector<string> lineas = this->juntarPalabras();
        this->actualizar(lineas);
    }

    vector<objeto*> getObjetos(){
        return objetos;
    }

    protected:

    virtual vector<string> juntarPalabras() = 0;
    virtual void asignarObjetos(const vector<string>_lineas) = 0;

    virtual vector<string> cargarLineas(){
        vector<string> result;

        ifstream file(path);
        if (file.is_open())
        {
            string linea;
            while (getline(file, linea))
            {
                result.push_back(linea);
            }
        }
        file.close();

        return result;
    }

    virtual void actualizar(const vector<string>_lineas){
        ofstream file(path);
        for(auto i: _lineas){
            file<<i<<'\n';
        }
        file.close();
    }

    string path;
    vector<objeto*> objetos;
};

class FLoaderUsuario: public FLoader<Usuario>{
    public:
    FLoaderUsuario(const string &_path);

    protected:
    vector<string> juntarPalabras() override;
    void asignarObjetos(const vector<string>_lineas) override;
};

/* class FLoaderCliente: public FLoaderUsuario{
    public:
    FLoaderCliente();
    protected:
}; */

#endif
/* {
        vector<string> result;

        for(auto i :usuarios){
            string csv_u{i->getNombre() + ", " + i->getApellido() + ", " + i->getDni() + ", " + i->getClave()};
            result.push_back(csv_u);
        }

        return result;
    } */