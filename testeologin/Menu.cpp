#include "Menu.h"

Menu::~Menu(){
}
Menu::Menu(vector<Establecimiento> _ests):ests(_ests){
    Clientes.CargarArchivo();
    Administradores.CargarArchivo();
    Peliculas.CargarArchivo();

    jerarquia.push([=](){
        Bienvenida();
    });
}

void Menu::LogIn(){
    auto incorrecto = end(Clientes.objetos);
    do{
        string dni, clave;
        cout<<"Inicie sesioin:"<<endl;
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

    cout<<"Incio de sesion exitoso. Pulse para continuar."<<endl;
    char dummy; cin>>dummy;
    
    jerarquia.push([=](){
        MenuCliente();
    });
    system("clear");
    jerarquia.top()();
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

    select = new Usuario(nuevo);

    cout<<"Cuenta creada exitosamente. Pulse para continuar."<<endl;
    char dummy; cin>>dummy;
    system("clear");

    jerarquia.push([=](){
        MenuCliente();
    });
    jerarquia.top()();

    jerarquia.pop();
}

void Menu::Bienvenida(){
    
    utilidad::leerTexto("res/bienvenida.txt");
    
    vector<function<void(void)>> temp{
        [=](){LogIn();},
        [=](){SignUp();},
        [=](){LogAdmin();}
    };

    utilidad::voidChooser(jerarquia,temp);

    system("clear");
    jerarquia.top()();
    jerarquia.pop();
}

void Menu::LogAdmin(){
    auto incorrecto = end(Administradores.objetos);
    do{
        string dni, clave;
        cout<<"Inicie sesion:"<<endl;
        cout<<"Ingrese dni: ";
        cin>>dni;
        cout<<"Ingrese clave: ";
        cin>>clave;

        incorrecto = find_if(begin(Administradores.objetos), end(Administradores.objetos), [dni, clave](Usuario* usr){
            bool a = dni== usr->getDni(), b=clave==usr->getClave();
            return a&&b;
        });
    }while(incorrecto==end(Administradores.objetos));

    select = &(**incorrecto);
    
    jerarquia.push([=](){
        MenuAdmin();
    });

    system("clear");
    jerarquia.top()();
    jerarquia.pop();
}

void Menu::MenuAdmin(){
    credenciales();
    utilidad::leerTexto("res/menuadmin.txt");
    system("clear");
}

void Menu::credenciales(){
    cout<<"Sus credenciales son: "<<endl;
    cout<<*select;
}

void Menu::MenuCliente(){
    credenciales();
    utilidad::leerTexto("res/menucliente.txt");

    vector<function<void(void)>> temp{
        [=](){
            for(auto e:ests)
            e.verFunciones();

            cout<<"Presiona para continuar.";
            char dummy; cin>>dummy;
        },
        [=](){comprarEntradas();},
        [=](){verPeliculas();}
    };

    utilidad::voidChooser(jerarquia,temp);
    
    system("clear");
    jerarquia.top()();
    jerarquia.pop();
    jerarquia.top()();
}

void Menu::comprarEntradas(){

    Establecimiento selEstablecimiento;
    Funcion selFuncion;

    int opcionEstablecimiento, opcionFuncion;
    cout<<"Seleccione Establecimiento: "<<endl;
    for(int i=0; i<ests.size(); i++){
        cout<<"Opcion "<<i<<": "<<ests[i].getNombres()<<endl;
    }
    do{
        cin>>opcionEstablecimiento;
    }while(opcionEstablecimiento<0||opcionEstablecimiento>ests.size());


    
    cout<<"Seleccione La Funcion: "<<endl;
    ests[opcionEstablecimiento].verFunciones();
    do{
        cin>>opcionFuncion;
    }while(opcionFuncion<0||opcionFuncion>ests[opcionEstablecimiento].Funciones.objetos.size());

    selEstablecimiento = ests[opcionEstablecimiento];
    selFuncion = *ests[opcionEstablecimiento].Funciones.objetos[opcionFuncion];

    addCompra(selEstablecimiento, selFuncion);

}

void Menu::addCompra(Establecimiento _e, Funcion _f){
    Compras.push_back(Compra(_f, _e));
}

void Menu::verPeliculas(){
    for(auto i: Peliculas.objetos){
        cout<<*i<<endl;
    }
    cout<<"Presiona para continuar.";
    char dummy; cin>>dummy;
    system("clear");
}

void Menu::verCompras(){
    for(auto c: Compras){
        cout<<c;
    }
    string imprimir;
    cout<<"Desea imprimir sus compras? (si) : ";
    cin>>imprimir;
    if(imprimir=="si"){
        fstream pdf;
        pdf.open("Boleta"+select->getDni()+".pdf",ios_base::out);
        
        for(auto c: Compras){
            pdf<<c;
        }
        pdf.close();
    }

}