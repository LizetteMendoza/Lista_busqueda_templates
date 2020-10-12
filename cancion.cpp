#include<iostream>
#include"cancion.h"
#include<iostream>


using namespace std;

Cancion::Cancion(){}

Cancion::Cancion(const Cancion& c): nombre(c.nombre), autor(c.autor), interprete(c.interprete),mp3(c.mp3), posicion(c.posicion){}

string Cancion::getNombre() const{
  return nombre;
}

string Cancion::getAutor() const{
  return autor;
}

string Cancion::getInterprete() const{
   return interprete;
}

string Cancion::getMp3() const{
    return mp3;
}

int Cancion::getPosicion() const{
   return posicion;
}

string Cancion::toString() const{
   string resultado;
   resultado= nombre;
   resultado+= "\t";
   resultado+=autor;
   resultado+= "\t";
   resultado+=interprete;
   resultado+= "\t";
   resultado+=mp3;
   resultado+= "\t";
   resultado+=to_string(posicion);

   return resultado;
}

void Cancion::setNombre(const std::string& n){
    nombre = n;
}

void Cancion::setAutor(const std::string&a){
    autor = a;
}

void Cancion::setInterprete(const std::string&i){
    interprete = i;
}

void Cancion::setMp3(const std::string& m){
    mp3 = m;
}

void Cancion::setPosicion(const int&p){
   posicion = p;
}

Cancion& Cancion::operator = (const Cancion&c){
    nombre = c.nombre;
    autor = c.autor;
    interprete = c.interprete;
    mp3 = c.mp3;
    posicion = c.posicion;

    return *this;
}

bool Cancion::operator==(const Cancion& c) const{

   return nombre == c.nombre //el error esta aqui, pero aun no se que es o porque
   or (interprete == c.interprete);
}

