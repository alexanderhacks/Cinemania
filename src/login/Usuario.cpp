#include "Usuario.h"

Usuario::Usuario(const int& _null)
:nombre(""), apellido(""), dni(""), clave(""){

}

Usuario::Usuario(const vector<string>&_args)
    :nombre(_args[0]), apellido(_args[1]), dni(_args[2]), clave(_args[3]){    }

ostream& operator<<(ostream &os, const Usuario& usr){
    os<<"Nonmbre: "<<usr.nombre<<'\n';
    os<<"Apellido: "<<usr.apellido<<'\n';
    os<<"DNI: "<<usr.dni<<'\n';
    return os;
}

Usuario::~Usuario(){}

bool operator==(const Usuario& usr1, const Usuario& usr2){
    bool dni = usr1.dni == usr2.dni;
    bool clave = usr1.clave == usr2.clave;
    return dni && clave;
}

string Usuario::getNombre(){
    return nombre;
}
    
string Usuario::getApellido(){
    return apellido;
}
    
string Usuario::getClave(){
    return clave;
}

string Usuario::getDni(){
    return dni;    
}

void Usuario::setNombre(){
    cout<<"Ingrese su nuevo nombre: ";
    cin>>nombre;
}

void Usuario::setApellido(){
    cout<<"Ingrese su nuevo apellido: ";
    cin>>apellido;
}

void Usuario::setDni(){
    cout<<"Ingrese su nuevo dni: ";
    cin>>dni;
}

void Usuario::setClave(){
    cout<<"Ingrese su nueva clave: ";
    cin>>clave;
}

Usuario::Usuario(string _nombre, string _apellido, string _dni, string _clave):
nombre(_nombre), apellido(_apellido), dni(_dni), clave(_clave){}

Usuario::Usuario(){
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"Ingrese su apellido: ";
    cin>>apellido;
    cout<<"Ingrese su dni: ";
    cin>>dni;
    cout<<"Ingrese su clave: ";
    cin>>clave;
}