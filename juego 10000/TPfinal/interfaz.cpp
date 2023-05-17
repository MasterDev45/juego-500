#include <iostream>
#include <cstdio>
#include <string.h>
#include <ctime>
#include "rlutil.h"
#include "funciones.h"
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

void dibujarInterfaz(){
    int i=0,x=0;
   for (i>0;i<=100;i++){
        rlutil::setColor(rlutil::COLOR::BLUE);

        rlutil::locate(1+i,3);
        std::cout<<(char)204;

        rlutil::locate(1+i,25);
        std::cout<<(char)204;


        for (x>0;x<=2;x++){

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(71,1+x);
        std::cout<<(char)206;

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(34,1+x);
        std::cout<<(char)206;

        }

        for (x>0;x<=27;x++){

         rlutil::setColor(rlutil::COLOR::BLUE);
         rlutil::locate(102,-2+x);
         std::cout<<(char)206;



        }
        rlutil::setColor(rlutil::COLOR::WHITE);
    }

}

void dibujarpuntaje(){
    int i=0,x=0;
   for (i>0;i<=50;i++){
        rlutil::setColor(rlutil::COLOR::BLUE);

        rlutil::locate(39+i,5);
        std::cout<<(char)204;

        rlutil::locate(39+i,20);
        std::cout<<(char)204;



        for (x>0;x<=15;x++){

         rlutil::setColor(rlutil::COLOR::BLUE);
         rlutil::locate(39,5+x);
         std::cout<<(char)206;

         rlutil::locate(45,5+x);
         std::cout<<(char)206;

         rlutil::locate(90,5+x);
         std::cout<<(char)206;

        }
        rlutil::setColor(rlutil::COLOR::WHITE);
    }

    rlutil::locate(42,7);
    std::cout<<'G';
    rlutil::locate(42,8);
    std::cout<<'A';
    rlutil::locate(42,9);
    std::cout<<'M';
    rlutil::locate(42,10);
    std::cout<<'E';
    rlutil::locate(42,13);
    rlutil::setColor(rlutil::COLOR::RED);
    std::cout<<'O';
    rlutil::locate(42,14);
    std::cout<<'V';
    rlutil::locate(42,15);
    std::cout<<'E';
    rlutil::locate(42,16);
    std::cout<<'R';
    rlutil::setColor(rlutil::COLOR::WHITE);

}
