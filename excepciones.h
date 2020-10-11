#ifndef EXCEPCIONES_H_INCLUDED
#define EXCEPCIONES_H_INCLUDED

#include<exception> //termian el programa cuando se generan errores
#include<string>

class ListExcep: public std::exception {  //Clase que se encuentra en la biblioteca estandar de c++
 private:
    std:: string menj;

 public:
    explicit ListExcep(const char* mensaje) : menj(mensaje) {} //constructores
    explicit ListExcep(const std:: string& mensaje) : menj(mensaje){} //coje una cadena parametro y lo muestra

    virtual ~ListExcep() throw () {} //destructor

    virtual const char* what() const throw(){
        return menj.c_str(); //devuelve el error
    }
};

#endif // EXCEPCIONES_H_INCLUDED
