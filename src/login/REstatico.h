#pragma once

#include"Sala.h"
#include"Establecimiento.h"
#include<vector>
using namespace std;

namespace recursos
{
    vector<SalaEstructura> salest ={
        SalaEstructura(40),
        SalaEstructura(35),
        SalaEstructura(60),
        SalaEstructura(55),
        SalaEstructura(78)
    };

    vector<Sala> SEst1 = {
        Sala(1, &salest[0]),
        Sala(2, &salest[3]),
        Sala(3, &salest[1]),
        Sala(4, &salest[0]),
        Sala(5, &salest[4]),
        Sala(6, &salest[2])
    };

    vector<Sala> SEst2 = {
        Sala(1, &salest[0]),
        Sala(2, &salest[2]),
        Sala(3, &salest[1]),
        Sala(4, &salest[2])
    };

    vector<Sala> SEst3 = {
        Sala(1, &salest[4]),
        Sala(2, &salest[4]),
        Sala(3, &salest[1]),
        Sala(4, &salest[1]),
        Sala(5, &salest[0]),
        Sala(6, &salest[2])
    };
} // namespace recursos_estaticos
