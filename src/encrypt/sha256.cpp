#include "sha256.h"

std::string IntegerToBinary(int a)
{
    try
    {
        if (a < 0)
        {
            throw "[WARNING]: El número de entrada es menor a 0. Solo se aceptan valores positivos";
        }
        
        std::string str = std::bitset<8>(a).to_string();
        return str;
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    return nullptr;
}

std::string BinaryToString(std::string input) {
    // Se declara el valor de salida
    std::string output_{};
    for (size_t i = 0; i < input.length(); i++)
    {
        int c_ = input[i];
        // Adicionamos al valor de salida el valor en hexadecimales.
        output_ += IntegerToBinary(c_);
    }
    // Retornamos el valor de salida
    return output_;
}

std::string HashFunction(std::string input) {
    /* 1. Padding: Completar con yn 1 y el resto 0 para completar los 64 bits*/
    try
    {
        // Si el valor de entrada es mayor a 64 bits
        if (input.length() > 64)
        {
            throw "[WARNING]: El tamaño de entrada es mayor a 64 caracteres.";
        }
        
        // Definimos el tamaño de entrada
        int l = input.length();

        // Asignamos un "1" como caracter adicional
        std::string input_padding = input + "1";

        // Asignamos con 0 los caracteres faltantes
        input_padding.insert(0 , 64 - (l+1), '0');

        //
    }
    catch(const char* exception)
    {
        std::cerr << exception << std::endl;
    }

    /*2. Lenght: cambiamos el tamaño de */

}