#include "Menu.h"

Menu::~Menu(){
}
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

    select = &(**incorrecto);
    cout<<*select;
    // select = &(*incorrecto);
    // cout<<*select;
    jerarquia.pop();

}

void Menu::SignUp(){
    auto it = begin(Clientes.objetos);

    Usuario nuevo(2);
    while(it!=end(Clientes.objetos)){

        nuevo =utilidad::leerTextoIN<Usuario>("res/signup.txt");
        string id = nuevo.getDni();
        
        it = find_if(begin(Clientes.objetos), end(Clientes.objetos), [id](Usuario* usr){
            return id==usr->getDni();
        });
    }
    Clientes.objetos.push_back(new Usuario(nuevo));
    Clientes.EscribirArchivo();
}

void Menu::Bienvenida(){
    // cout<<Clientes.objetos.size()<<endl;
    utilidad::leerTexto("res/bienvenida.txt");
    
    vector<function<void(void)>> temp{
        [=](){LogIn();},
        [=](){SignUp();}
    };

    utilidad::voidChooser(jerarquia,temp);

    jerarquia.top()();
}