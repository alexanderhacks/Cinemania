#pragma once
#include<string>
#include<iostream>
using namespace std;


class Pelicula{
    public:
    Pelicula()=default;
    Pelicula(const string &_nombre, const string &_script, const int &_tiempo);
    ~Pelicula();
    string getNombre();
    int getTiempo();
    string getScriptPath();

    friend ostream& operator<<(ostream &os, const Pelicula &p);
    private:
    string nombre, script_path;
    int tiempo;
};