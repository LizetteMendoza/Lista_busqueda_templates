#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include<iostream>

#include"lista.h"
#include"cancion.h"

class Menu{

private:
    void userInterface(List<Cancion>&); //modifica la original por recibir por referencia

 public:
     Menu(List<Cancion>&);
};

#endif // MENU_H_INCLUDED
