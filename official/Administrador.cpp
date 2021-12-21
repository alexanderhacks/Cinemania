#include "Administrador.h"
void printData(std::string path){
    std::ifstream file(path);
    std::string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            std::cout << line << '\n';
        }
        file.close();
    }
}
void Administrador::GetHistoryData()
{
    printData("./data/cAdmin.csv");
    printData("./data/cCliente.csv");
    printData("./data/pelicula.csv");
}

// int main()
// {
//     Administrador* admin = Administrador::GetAdministrador();
//     admin->GetHistoryData();
// }