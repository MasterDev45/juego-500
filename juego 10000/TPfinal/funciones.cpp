#include <iostream>
#include <cstdlib>
#include "rlutil.h"
#include "funciones.h"
#include <ctime>
using namespace std;

void reglas(){


    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(29,2);
    std::cout<<"REGLAS";

    rlutil::locate(2,5);
    std::cout<<"El objetivo del juego es obtener 10000 puntos en la menor cantidad de rondas posibles."<<std::endl;

    std::cout<<"Una ronda puede estar compuesta por varios lanzamientos."<<std::endl;

    std::cout<<"Un lanzamiento consiste en tirar seis dados y evaluar sus valores para determinar el puntaje"<<std::endl;

    std::cout<<"El puntaje de un lanzamiento est� determinado por una serie de reglas que figuran en la seccion Combinaciones ganadoras."<<std::endl;

    std::cout<<"Si en un lanzamiento el jugador obtiene una combinaci�n ganadora entonces acumular� provisoriamente el puntaje correspondiente."<<std::endl;

    std::cout<<"Luego de un lanzamiento ganador, el jugador debe elegir si desea volver a lanzar los dados o asegurarse el puntaje acumulado hasta el momento."<<std::endl;

    std::cout<<"Si en un lanzamiento el jugador no obtiene una combinaci�n ganadora perder� todo el puntaje acumulado de esa ronda y ser� el turno del otro jugador."<<std::endl;

    std::cout<<"Esta es la raz�n por la que seguir lanzando es riesgoso."<<std::endl;

    std::cout<<"La posibilidad de hacer m�s puntos debe ser considerada con el riesgo de perder todo lo que se gan� durante un turno."<<std::endl;

    std::cout<<"Una vez que un jugador decide finalizar el turno, todo el puntaje acumulado en el turno se acumular� al puntaje total del jugador."<<std::endl;

    std::cout<<"Cuando un jugador obtiene exactamente 10000 puntos, el juego termina."<<std::endl;

    std::cout<<"Si un jugador se excede de los 10000 puntos volver� al puntaje que ten�a previamente al comenzar la ronda."<<std::endl;

    std::cout<<endl;

    std::cout<<"Ejemplo:"<<std::endl;

    std::cout<<endl;

    std::cout<<"Si en el inicio de una ronda el jugador tiene 9000 puntos y en transcurso de la ronda termina obteniendo 1500 puntos,"<<std::endl;

    std::cout<<"entonces, como el puntaje acumulado total superar�a los diez mil, la cantidad de puntos no variar�,"<<std::endl;

    std::cout<<"conservando los 9000 puntos que ten�a al inicio"<<std::endl;




    std::cout<<endl;
    rlutil::setColor(rlutil::COLOR::LIGHTCYAN);




}

void jugador_1(){
    int i;
    for(i>=0;i<=6;i++){
        rlutil::locate(7,2);
        std::cout<<"JUGADOR:";
        std::cout<<puntaje1<<std::endl;
        rlutil::locate(30,2);
        std::cout<<"RONDA:"<<std::endl;
        rlutil::locate(60,2);
        std::cout<<"PUNTAJE:"<<std::endl;
        rlutil::setBackgroundColor(0);
        dibujarinterfaz();
        mostrardados();
    }

}


