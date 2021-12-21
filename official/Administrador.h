#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <iostream>
#include <fstream>

class Administrador
{
private:
    Administrador *admin;
    Administrador() = default;

public:
    ~Administrador();
    Administrador *GetAdministrador();
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
