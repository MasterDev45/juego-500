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
       // cin >> vec[i];
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
  }

  rlutil::setBackgroundColor(0);

  rlutil::anykey();

}






