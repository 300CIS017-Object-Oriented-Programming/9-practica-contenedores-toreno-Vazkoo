//
// Created by Janus on 1/04/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>

using std::string;
using std::cout;
using std::endl;

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

    void mostrar() const; //Declaración de la función mostrar

    string getCodigo() const;

    string getNombre() const;

    string getGenero() const;

    int getNivelDificultad() const;

};

#endif //VIDEOJUEGO_H
