#include <iostream>
#include <cstdlib>
#include "rlutil.h"
#include "funciones.h"
using namespace std;

void reglas(){


    rlutil::setColor(rlutil::COLOR::BLUE);
    std::cout<<"El objetivo del juego es obtener 10000 puntos en la menor cantidad de rondas posibles."<<std::endl;
    rlutil::setColor(rlutil::COLOR::GREEN);
    std::cout<<"Una ronda puede estar compuesta por varios lanzamientos."<<std::endl;
    rlutil::setColor(rlutil::COLOR::MAGENTA);
    std::cout<<"Un lanzamiento consiste en tirar seis dados y evaluar sus valores para determinar el puntaje"<<std::endl;
    rlutil::setColor(rlutil::COLOR::RED);
    std::cout<<"El puntaje de un lanzamiento está determinado por una serie de reglas que figuran en la sección Combinaciones ganadoras."<<std::endl;
    rlutil::setColor(rlutil::COLOR::WHITE);
    std::cout<<"Si en un lanzamiento el jugador obtiene una combinación ganadora entonces acumulará provisoriamente el puntaje correspondiente."<<std::endl;
    rlutil::setColor(rlutil::COLOR::RED);
    std::cout<<"Luego de un lanzamiento ganador, el jugador debe elegir si desea volver a lanzar los dados o asegurarse el puntaje acumulado hasta el momento."<<std::endl;
    rlutil::setColor(rlutil::COLOR::CYAN);
    std::cout<<"Si en un lanzamiento el jugador no obtiene una combinación ganadora perderá todo el puntaje acumulado de esa ronda y será el turno del otro jugador."<<std::endl;
    rlutil::setColor(rlutil::COLOR::GREEN);
    std::cout<<"Una ronda puede estar compuesta por varios lanzamientos."<<std::endl;
    rlutil::setColor(rlutil::COLOR::LIGHTBLUE);
    std::cout<<"Una ronda puede estar compuesta por varios lanzamientos."<<std::endl;


    std::cout<<endl;




}

void jugador_1(){
    cout<<"prueba de algoritmo del jugador 1"<<endl;
}
void jugador_2(){
    cout<<"prueba de algoritmo del jugador 2"<<endl;
}



