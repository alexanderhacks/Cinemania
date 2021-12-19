#ifndef usuario_h
#define usuario_h

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

class Usuario{
    public:
    Usuario();
    Usuario(string _nombre, string _apellido, string _dni, string _clave);
    void setNombre();
    void setApellido();
    void setClave();
    void setDni();
    string getNombre();
    string getApellido();
    string getClave();
    string getDni();
    ~Usuario();

    friend ostream& operator<<(ostream &os, const Usuario& usr);

    private:
    string nombre, apellido, dni, clave;
};

#endif