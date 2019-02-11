/*
  Archivo: Test_HallDeLaFama.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-03-04
  Fecha última modificación: 2019-02-07
  Versión: 0.1
  Licencia: GPL

    //////////////////////////////////////////////////
  _Edición_
  Estudiantes:  Gabriel Arango  -  1823077   
                Daniel Tabares  -  1824898
*/


/*
  Pruebas para el juego Tetris
  Para compilar:
  g++ -std=c++11 ../HallDeLaFama.cpp Test_HallDeLaFama.cpp -o Test_HallDeLaFama
*/

#include "../HallDeLaFama.h"
#include <iostream>
using namespace std;



int main(int numeroArgumentos, char *argumentos[])
{
  HallDeLaFama hallDeLaFama;
  hallDeLaFama.nuevoGanador("JAJATEPAPIE", 50);
  hallDeLaFama.nuevoGanador("SISTEMAS", 30);
  hallDeLaFama.nuevoGanador("JUGODEMORA", 44);
  hallDeLaFama.nuevoGanador("AGUACATE", 76);
  hallDeLaFama.nuevoGanador("NECESITO", 100);
  hallDeLaFama.nuevoGanador("QUEMARLO_TODO_POR_ERROR", 20);
  hallDeLaFama.nuevoGanador("sisascuchavoyacancelardiscretasII", 300);
  hallDeLaFama.nuevoGanador("hola compa", 166);
  hallDeLaFama.nuevoGanador("TRUJOLAMO", 155);
  hallDeLaFama.nuevoGanador("SHE_MAMERTT",11);
  hallDeLaFama.nuevoGanador("C R O T O", 130); 
  int puntaje = 199999;  // El puntaje lo genera el juego
  string nombre;    // pero el nombre lo proporciona el usuario. Ello es un punto de entrada para hackers, como enseguida veremos.
  cout << "Tu puntaje ha sido de " << puntaje << ". Dime tu nombre: ";
  getline(cin, nombre);
  hallDeLaFama.nuevoGanador(nombre, puntaje);


  cout << hallDeLaFama.listaDeGanadores();

  return 0;
}

