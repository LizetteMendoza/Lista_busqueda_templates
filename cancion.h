#ifndef CANCION_H_INCLUDED
#define CANCION_H_INCLUDED

class Cancion{
private:
    std::string nombre;
    std::string autor;
    std::string interprete;
    std::string mp3;
    int posicion;

public:
    Cancion();
    Cancion(const Cancion&);

    std::string getNombre() const;
    std::string getAutor() const;
    std::string getInterprete() const;
    std::string getMp3() const;
    int getPosicion() const;

    std::string toString() const;

    void setNombre(const std::string&);
    void setAutor(const std::string&);
    void setInterprete(const std::string&);
    void setMp3(const std::string&);
    void setPosicion(const int&);

    Cancion& operator = (const Cancion&);

    bool operator == (const Cancion&) const;
};



#endif // CANCION_H_INCLUDED
