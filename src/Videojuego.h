//
// Created by Janus on 1/04/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>

using std::string;

class Videojuego
{
  private:
    string codigo;
    string nombre;
    string genero;
    int nivelDificultad;

  public:
    Videojuego(); //Constructor por defecto
    Videojuego(string codigo, string nombre, string genero, int nivelDificultad); //Constructor

    virtual ~Videojuego(); //Destructor

    void mostrar const(); //Declaración de la función mostrar

    const string &getCodigo() const;

    const string &getNombre() const;

    const string &getGenero() const;

    int getNivelDificultad();

};

#endif //VIDEOJUEGO_H
