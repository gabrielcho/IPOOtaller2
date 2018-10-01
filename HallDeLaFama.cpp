/*
  Archivo: HallDeLaFama.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-28
  Fecha última modificación: 2018-03-05
  Versión: 0.1
  Licencia: GPL
*/

#include "HallDeLaFama.h"

HallDeLaFama::HallDeLaFama(string archivo)
{
  numeroDeGanadores = 0;
// ToDo para el PROYECTO (no hace falta hacerla para el Taller2)
}


HallDeLaFama::~HallDeLaFama()
{
// ToDo para el PROYECTO (no hace falta hacerla para el Taller2)
}


void HallDeLaFama::nuevoGanador(string nombre, int puntaje)
{

  for(int pos = 0; pos <= numeroDeGanadores ; pos++)
  {

    if(puntos[pos] == 0)
    {
      numeroDeGanadores++;
      puntos[pos] = puntaje;
      ganadores[pos] = nombre;
      return;
    }

    if (numeroDeGanadores == 10)
      return;

    if( (ganadores[pos] == nombre) and (puntaje > puntos[pos]))
      {
      puntos[pos] = puntaje;
      return;
      }


      if (( pos == 9 ) and (puntaje > puntos[pos]) )
      {
        ganadores[pos] = nombre;
        puntos[pos] = puntaje;
        return;
      }
  }
}


void HallDeLaFama::ordenar()
{
  int aux;
      for (int orden1=0;orden1<numeroDeGanadores;orden1++)
      {
        for (int orden2=0;orden2<numeroDeGanadores;orden2++)
        {
          if (puntos[orden2]<puntos[orden2+1])
          {
            aux=puntos[orden2];
            puntos[orden2]=puntos[orden2+1];
            ganadores[orden2]=ganadores[orden2+1];
            puntos[orden2+1]=aux;
          }
        }
      }
}


string HallDeLaFama::listaDeGanadores()
{

  string resultado = "";

  for(int cual=0; cual<numeroDeGanadores; cual++)
    resultado += ganadores[cual] + "\t" + to_string(puntos[cual]) + "\n";

  return resultado;
}
