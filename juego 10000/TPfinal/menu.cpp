#include <iostream>
#include "rlutil.h"
#include "funciones.h"
#include <ctime>
using namespace std;

void dibujarmarco(){
    int i=0,x=0;
   for (i>0;i<=35;i++){
        rlutil::setColor(rlutil::COLOR::BLUE);

        rlutil::locate(35+i,7);
        std::cout<<(char)242;

         rlutil::locate(35+i,16);
        std::cout<<(char)242;

        for (x>0;x<=8;x++){

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(71,8+x);
        std::cout<<(char)186;

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(34,8+x);
        std::cout<<(char)186;

        }
        rlutil::setColor(rlutil::COLOR::WHITE);
    }

}



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
                         jugador_1();
                         std::cout<<"Aprete ESC para volver";
                         rlutil::anykey();
                         if(04){
                            rlutil::cls();
                            return menu();

                         }
                         else{
                            op=0;
                         }
                     case 1:
                         rlutil::cls();
                         jugador_2();
                         std::cout<<"Aprete ESC para volver";
                         rlutil::anykey();
                         if(04){
                            rlutil::cls();
                            return menu();

                         }
                         else{
                            op=0;
                         }
                     case 2:
                         rlutil::cls();
                         reglas();
                         std::cout<<"Aprete ESC para volver";
                         rlutil::anykey();
                         if(04){
                            rlutil::cls();
                            return menu();

                         }
                         else{
                            op=0;
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

