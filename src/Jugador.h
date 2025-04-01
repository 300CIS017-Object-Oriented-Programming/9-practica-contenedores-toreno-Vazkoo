//
// Created by Janus on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;

class Jugador
{
  private:
    string nickname;
    int nivelRanking
    vector<Videojuego *> videojuegosInscritos;

  public:
    Jugador();
    Jugador(string nickname, int nivelRanking);

    void mostrar() const;

    virtual ~Jugador();

    const string &getNickname() const;

    int getNivelRanking() const;
}
#endif //JUGADOR_H
