#include <iostream>
#include <string>
#include "lib/colormod.h"

using namespace std;

int main()
{
  // Importamos los namespace heredados de la clase colormod para el manejo de colores.
  Color::Modifier red(Color::FG_RED);
  Color::Modifier def(Color::FG_DEFAULT);
  Color::Modifier green(Color::FG_GREEN);

  // Mensaje de entrada
  cout << red << "¡Bienvenido a Cinemania!" << def << " Tu mejor experiencia en el cine, " << green << "aquí.\n";

  return 0;
}
