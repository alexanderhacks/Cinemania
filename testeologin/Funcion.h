#ifndef Funcion_h
#define Funcion_h

#include<string>
#include<thread>

using namespace std;

class Pelicula{
    public:
    Pelicula(const string &_nombre, const string &_script, const int &_tiempo);
    int getTiempo();
    string getNombre();
    string getScriptPath();
    private:
    string nombre, script_path;
    int tiempo;
};

class Funcion{
    public:
    Funcion(const Pelicula &_peli);

    void Stream();
    private:
    Pelicula peli;
    static 
};

#endif