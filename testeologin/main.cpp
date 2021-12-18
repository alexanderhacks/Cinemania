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
    private:
    string nombre, apellido, dni, clave;
};

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

int main(){

}