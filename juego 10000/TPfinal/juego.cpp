#include <iostream>
#include <cstdio>
#include <string.h>
#include <ctime>
#include "rlutil.h"
#include "funciones.h"
using namespace std;


  void dibujarDado(int num) {
    int i=0,x=0;
   /*for (int x = 0; x < 7; x++) {
    for (int y = 0; y < 3; y++) {
      rlutil::locate(x + num, y + num);
      rlutil::setColor(15);
      cout <<(char)254;

    }
  }

  // Draw the number on the die.
  /*switch (num) {
    case 1:
        rlutil::locate(42,5);
        rlutil::setColor(15);
        cout<<(char)254;
      break;
    case 2:
        rlutil::locate(42,5);
        rlutil::setColor(15);
        cout<<(char)254;
        rlutil::locate(42,4);
        rlutil::setColor(15);
        cout<<(char)254;

      break;
    case 3:
        rlutil::locate(42,5);
        rlutil::setColor(15);
        cout<<(char)254;
        rlutil::locate(42,4);
        rlutil::setColor(15);
        cout<<(char)254;
        rlutil::locate(42,6);
        rlutil::setColor(15);
        cout<<(char)254;

      break;
    case 4:
        rlutil::locate(41,5);
        rlutil::setColor(15);
        cout<<(char)254;
        rlutil::locate(41,4);
        rlutil::setColor(15);
        cout<<(char)254;
        rlutil::locate(43,4);
        rlutil::setColor(15);
        cout<<(char)254;
        rlutil::locate(43,5);
        rlutil::setColor(15);
        cout<<(char)254;


      break;
    case 5:
        rlutil::locate(42,5);
        rlutil::setColor(15);
        cout<<(char)254;

      break;
    case 6:
        rlutil::locate(42,5);
        rlutil::setColor(15);
        cout<<(char)254;

      break;
  }*/
}

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

void one_player() {
  int playerScore = 0;
  int botScore = 0;
  int ronda=0;

  while (playerScore < 5 || botScore < 5) {
    ronda++;
    // Roll the dice for the player.
    srand(time(0));
    int die1 = rand() % 6 + 1;
    int botDie1 = rand() % 6 + 1;
    botScore += botDie1;
    playerScore += die1;

    // Draw the dice.
    dibujarInterfaz();
    rlutil::locate(39, 6);
    dibujarDado(die1);

    rlutil::locate(1, 1);
    cout << "Tu dado es: " << die1 << endl;
    dibujarInterfaz();

    rlutil::locate(35, 1);
    cout << "BOT dado: " << botDie1 << endl;
    dibujarInterfaz();

    rlutil::locate(72, 1);
    cout << "Ronda: " << ronda << endl;

    rlutil::locate(38, 11);
    cout << "Presiona una tecla para continuar..." << endl;
    rlutil::getkey();
    rlutil::cls();
  }

  dibujarpuntaje();
  rlutil::locate(54, 11);
  cout << "Tu puntaje: " << playerScore << endl;
  rlutil::locate(54, 12);
  cout << "Puntaje del BOT: " << botScore << endl;

  if (playerScore > botScore) {
    rlutil::locate(54, 13);
    cout << "Has ganado en la Ronda:" << ronda << endl;
  } else {
    rlutil::locate(54, 13);
    cout << "Has perdido" << endl;
  }
  ronda++;
}

void two_player(){
    int player_one_Score = 0;
    int player_two_Score = 0;
    int ronda=0;
    while (player_one_Score < 100 || player_two_Score < 100 || ronda<4) {

        // Roll the dice for the player.
        srand(time(0));
        int die1 = rand() % 6 + 1;

        player_one_Score += die1;

        dibujarmarco();

        rlutil::locate(39,9);
        cout << "[JUGADOR 1]Tu dado es: "<<die1<<endl;

        cout << "Apreta una tecla para continuar..." << endl;
            rlutil::getkey();
            rlutil::cls();
        int die2 = rand() % 6 + 1;
        player_two_Score += die2;
        cout << "[JUGADOR 2]Tu dado es: : "<<die2<<endl;
        cout << "Apreta una tecla para continuar..." << endl;
            rlutil::getkey();
            rlutil::cls();
        }
        cout << "Tu puntaje: " << player_one_Score << endl;
        cout << "Puntaje del BOT: " << player_two_Score << endl;
        if(player_one_Score>player_two_Score){
            cout << "[JUGADOR 1]Has ganado"<<endl;
        }else{
            cout <<"[JUGADOR 2]Has ganado"<<endl;
        }
        ronda++;


    }


