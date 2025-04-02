//
// Created by Janus on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <map>
#include "Jugador.h"

using std::string;
using std::cout;
using std::endl;
using std::map;

class Torneo {
private:
    map<string, Videojuego*> videojuegosDisponibles;
    map<string, Jugador*> jugadoresRegistrados;

public:
    ~Torneo();
    void registrarVideojuego(string codigo, string nombre, string genero, int nivelDificultad);
    void registrarJugador(string nickname, int nivelRanking);
    void inscribirJugadorEnVideojuego(string nickname, string codigo);
    void mostrarVideojuegosDeJugador(string nickname) const;
    void calcularPromedioDificultadJugador(string nickname) const;
};

#endif


#endif //TORNEO_H
