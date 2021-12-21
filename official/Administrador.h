#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <iostream>
#include <fstream>

class Administrador
{
private:
    static Administrador *admin;
    Administrador() = default;

public:
    ~Administrador();
    static Administrador *GetAdministrador();
    void GetHistoryData();
};

Administrador *Administrador::GetAdministrador()
{
    if (admin == nullptr)
    {
        admin = new Administrador();
    }
    return admin;
}
void printData(std::string path);
#endif
