
#include "Utilidad.h"

void utilidad::leerTexto(const string &_path)
{
    ifstream archivo(_path);
    stringstream sstr;

    while (archivo >> sstr.rdbuf())
        ;
    archivo.close();

    cout << sstr.str();
}

void utilidad::voidChooser(stack<function<void(void)>> &top, vector<function<void(void)>> &_functs)
{
    int n;
    cin >> n;
    if (n < _functs.size() && n >= 0)
        top.push(_functs[n]);
}