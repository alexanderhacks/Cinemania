#include "Menu.h"

Menu::Menu(){
    Clientes.CargarArchivo();
}

void Menu::LogIn(){
    auto incorrecto = end(Clientes.objetos);
    do{
    string dni, clave;
    cout<<"Ingrese dni: ";
    cin>>dni;
    cout<<"Ingrese clave: ";
    cin>>clave;

    incorrecto = find_if(begin(Clientes.objetos), end(Clientes.objetos), [dni, clave](Usuario* usr){
        bool a = dni== usr->getDni(), b=clave==usr->getClave();
        return a&&b;
    });

    
    }while(incorrecto==end(Clientes.objetos));


}

void Menu::Bienvenida(){
    // cout<<Clientes.objetos.size()<<endl;
    utilidad::leerTexto("res/bienvenida.txt");
    
    vector<function<void(void)>> temp{
        [=](){LogIn();}
    };

    utilidad::voidChooser(temp);
}