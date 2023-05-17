#include <iostream>
#include <cstdio>
#include <string.h>
#include <ctime>
#include "rlutil.h"
#include "funciones.h"
using namespace std;


void menu(){
    int op=1,y=0;
    rlutil::hidecursor();

    do{
        //rlutil::cls();
        dibujarmarco();

        rlutil::locate(39,9);
        std::cout<<"BIENVENIDO(NOMBRE DEL JUEGO)"<<std::endl;

        rlutil::locate(39,10);
        std::cout<<"1 Jugador"<<std::endl;

        rlutil::locate(39,11);
        std::cout<<"2 jugadores"<<std::endl;

        rlutil::locate(39,12);
        std::cout<<"Reglas"<<std::endl;

        rlutil::locate(39,13);
        std::cout<<"SALIR"<<std::endl;

        ///flechita
        rlutil::locate(36, 10 + y);
        std::cout<<(char)16<<std::endl;

        ///flechita
        rlutil::locate(50, 10 + y);
        std::cout<<(char)17<<std::endl;

        int key = rlutil::getkey();

        switch(key){
            case 14:///SUBIR
                rlutil::locate(36, 10 + y);
                 std::cout<<" "<<std::endl;
                 rlutil::locate(50, 10 + y);
                 std::cout<<" "<<std::endl;
                y--;
                if(y<0){
                    y=0;
                }
                break;
            case 15:///BAJAR
                 rlutil::locate(50, 10 + y);
                 std::cout<<" "<<std::endl;
                 rlutil::locate(36, 10 + y);
                 std::cout<<" "<<std::endl;
                y++;
                if(y>3){
                    y=3;
                }
                break;
            case 1:///ENTER
                 switch (y){
                     case 0:
                         rlutil::cls();
                         one_player();
                         rlutil::locate(54, 14);
                         cout << "Apreta una tecla para Volver..." << endl;
                         rlutil::getkey();
                         rlutil::cls();
                         break;
                     case 1:
                         rlutil::cls();
                         two_player();
                         cout << "Apreta una tecla para Volver..." << endl;
                         rlutil::getkey();
                         rlutil::cls();
                         break;
                     case 2:{
                         rlutil::cls();
                         reglas();
                         std::cout<<"Aprete ESC para volver";
                         cout << "Apreta una tecla para Volver..." << endl;
                         rlutil::getkey();
                         rlutil::cls();
                         break;
                         }
                     case 3:
                         op=0;
                    default:
                        break;
                   }
                break;///pasar salir del programa
        }

    }while(op!=0);
}

