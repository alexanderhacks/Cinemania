#pragma once

#include<sstream>
#include<string>
#include<iostream>
#include<fstream>
#include<functional>
#include<vector>
#include<stack>
#include"Usuario.h"

using namespace std;

namespace utilidad
{
    void leerTexto(const string& _path);

    template<typename returnType>
    returnType leerTextoIN(const string& _path){
        vector<string> args;
        string arg, line;
        ifstream archivo(_path);
        if(archivo.is_open()){
            while(getline(archivo, line)){
                cout<<line;
                cin>>arg;
                args.push_back(arg);
            }
        }
        archivo.close();

        returnType result(args);

        return result;
    }

    
    void voidChooser(stack<function<void(void)>> &top,vector<function<void(void)>>&_functs);
} // namespace utilidad