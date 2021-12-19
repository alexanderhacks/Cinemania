#pragma once

#include<sstream>
#include<string>
#include<iostream>
#include<fstream>
#include<functional>
#include<vector>

using namespace std;

namespace utilidad
{
    void leerTexto(const string& _path);

    
    void voidChooser(vector<function<void(void)>>&_functs);
} // namespace utilidad