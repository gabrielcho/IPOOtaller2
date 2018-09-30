/*
  Archivo: HallDeLaFama.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-24
  Fecha última modificación: 2018-02-26
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: HallDeLaFama
  Responsabilidad: Mantener un archivo en disco con la lista de los 10 mejores ganadores y sus puntajes. Debe crearlo 
  si no existe, actualizarlo y salvarlo. Y debe mantenerlo ordenado de mayor a menor puntaje. Se le puede pedir añadir
  un nuevo ganador con su puntaje. Se le puede pedir que retorne la lista de ganadores y puntajes.
  Colaboración: posee un archivo. Es propietario del archivo, de modo que se encarga de cerrarlo en el destructor.
*/

#ifndef HallDeLaFama_HH
#define HallDeLaFama_HH

#include <fstream>
#include <iostream>
#include <string>
using namespace std;


class HallDeLaFama
{
  private:
    string archivo;
    string ganadores[10];
    int puntos[10];
    int numeroDeGanadores;  // Un número entre 0 y 10
    
  public:
    /**
        Lee un archivo (si ya existe) con los 10 mejores ganadores, y los ordena. 
        El formato del archivo es una línea con cada ganador, ordenado de mayor a menor puntos. Cada línea es:
        nombre del ganador\tpuntos\n
        Es decir, hay un tabulador que separa el nombre del ganador de su puntaje.
        Veremos que esta clase es hackeable. Y después veremos como evitar el hackeo.
    */
    HallDeLaFama(string archivo="LosGanadoresDelTetris.txt");
    /**
        Salva los ganadores y sus puntajes en el archivo.
    */
    ~HallDeLaFama();
    /**
        Añade un nuevo ganador al final y luego ordena la lista.
    */
    void nuevoGanador(string nombre, int puntaje);
    /**
        Retorna un string con la lista de ganadores, con un ganador por línea. Y para cada ganador se especifica
        su nombre, un carácter tabulador y su puntaje.
    */
    string listaDeGanadores();
    
  protected:
    /**
        Ordena los puntos (y sus correspondientes ganadores) de mayor a menor.
    */
    void ordenar();
};


#endif

