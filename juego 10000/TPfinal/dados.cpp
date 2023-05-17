#include <iostream>
#include <ctime>
#include <cstdlib>
#include "rlutil.h"
#include "funciones.h"
using namespace std;

int tirarDado(){
    return rand() % 6 + 1;
    }

void cargarNumeros(int vec[], int tam)
{
    for(int i=0; i<=tam-1; i++)
    {
       cin >> vec[i];
       vec[i] = tirarDado();
    }
}

void mostrarNumeros(int vec[], int tam)
{
    for(int i=0; i<=tam-1; i++)
    {
        cout << vec[i] << endl;
    }
}

void dibujarCuadrado(int posx, int posy) {
  for (int x = 0; x < 7; x++) {
    for (int y = 0; y < 3; y++) {
      rlutil::locate(x + posx, y + posy);
      rlutil::setBackgroundColor(15);
      cout << " ";
    }
  }
}

void dibujarDado(int posx, int posy, int num) {
  dibujarCuadrado(posx, posy);

  switch (num)
  {
  case 1:
    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;
    break;
  case 2:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;
    break;
  case 3:
    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;

    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;

  case 4:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;

  case 5:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;

  case 6:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 3, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;


    rlutil::locate(posx + 3, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;
  default:
    break;
  }

}
void mostrardados(){
    for (int num = 1; num <= 6; num++) {
    dibujarDado(num*10, 5 + rand() % 4, rand()%6 + 1);
    rlutil::locate(7,2);
    std::cout<<"JUGADOR:";
    std::cout<<puntaje1<<std::endl;
    rlutil::locate(30,2);
    std::cout<<"RONDA:"<<std::endl;
    rlutil::locate(60,2);
    std::cout<<"PUNTAJE:"<<std::endl;
    rlutil::setBackgroundColor(0);
    dibujarinterfaz();

  }

  rlutil::setBackgroundColor(0);

  rlutil::anykey();

  rlutil::cls();



}

void dibujarinterfaz(){
    int i=0,x=0;
   for (i>0;i<=80;i++){
        rlutil::setColor(rlutil::COLOR::BLUE);

        rlutil::locate(6+i,1);
        std::cout<<(char)242;

        rlutil::locate(6+i,3);
        std::cout<<(char)242;

        rlutil::locate(6+i,22);
        std::cout<<(char)242;

        for (x>0;x<=20;x++){

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(6,2+x);
        std::cout<<(char)186;

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(86,2+x);
        std::cout<<(char)186;

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(29,2);
        std::cout<<(char)186;

        rlutil::setColor(rlutil::COLOR::BLUE);
        rlutil::locate(59,2);
        std::cout<<(char)186;

        }

        rlutil::setColor(rlutil::COLOR::WHITE);
    }

}

void puntaje1(){
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,pos;
    int puntos1=0,num1;

    switch(vec[6]){
        case 1:
            cont1=cont1+1;
        case 2:
            cont2=cont2+1;
        case 3:
            cont3=cont3+1;
        case 4:
            cont4=cont4+1;
        case 5:
            cont5=cont5+1;
        case 6:
            cont6=cont6+1;
        default:
            break;
    }

    if(cont1==2){
        puntos1==puntos1+200;
    }
    else{

        if(cont1==1){
            puntos1==puntos1+100;
        }
        else{

            if(cont1==4 || cont1==4 ){
            puntos1==puntos1+2000;
            }
            else{

                if(cont1==1){
                    puntos1==puntos1+10000;
                }
            }

        }
    }

    if(cont5==2){
        puntos1==puntos1+100;
    }
    else{

        if(cont5==1){
        puntos1==puntos1+50;
        }

    }

    if(cont5==2){
        puntos1==puntos1+100;
    }
    else{

        if(cont5==1){
        puntos1==puntos1+50;
        }

    }

    if( cont2>=3 || cont3>=3 || cont4>=3 || cont5>=3 || cont6>=3 ){
        puntos1==puntos1+(100*3);
    }

    if(cont1==1 && cont2==1 && cont3==1 && cont4==1 && cont5==1 && cont5==1 ){
        puntos1==puntos1+1500;
    }
    rlutil::locate(69,2);
    std::cout<<puntos1;

}



