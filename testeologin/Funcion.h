#ifndef Funcion_h
#define Funcion_h

#include<string>
#include<thread>
#include<chrono>   
#include<ctime> 
#include<fstream>
#include<iostream>
#include<sstream>

using namespace std;

class Pelicula{
    public:
    Pelicula()=default;
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

    thread StreamThread();
    
    private:
    void Stream();
    Pelicula peli;

};

#endif