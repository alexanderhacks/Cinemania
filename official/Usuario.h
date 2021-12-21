#ifndef Usuario_h
#define Usuario_h

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

class Usuario
{
public:
    Usuario();
    Usuario(const int &_null);
    Usuario(string _nombre, string _apellido, string _dni, string _clave);
    Usuario(const vector<string> &_args);
    void setNombre();
    void setApellido();
    void setClave();
    void setDni();
    string getNombre();
    string getApellido();
    string getClave();
    string getDni();
    ~Usuario();

    friend ostream &operator<<(ostream &os, const Usuario &usr);

    friend bool operator==(const Usuario &usr1, const Usuario &usr2);

private:
    string nombre, apellido, dni, clave;
};

#endif