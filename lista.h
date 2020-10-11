#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include"excepciones.h"


template<class T, int ARRAYSIZE = 1024>
class List{

 private:
    T data[ARRAYSIZE];
    int last;

    bool isValidPos(const int&);

    void copyAll(const List<T, ARRAYSIZE>&);

 public:
    List();
    List(const List<T, ARRAYSIZE>&);

    bool isEmpty();
    bool isFull();

    void insertData(const int&, const T&);

    void deletData(const int&);

    int getFirtsPos();
    int getLastPos();
    int getPrevpos(const int&);
    int getNextpos(const int&);

    int findDataLinear(const T&);//Recibe el elemento que va a buscar

    T retrieve(const int&);

    std::string toString();

    void print();

    void deletAll();

    List<T, ARRAYSIZE>& operator = (const List<T, ARRAYSIZE>&);
};

using namespace std;

template<class T, int ARRAYSIZE>
bool List<T, ARRAYSIZE>::isValidPos(const int&p){
    return p>= 0 and p<= last;
}

template<class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::copyAll(const List<T, ARRAYSIZE>&l){
    int i=0;
    while(i<= l.last){
        data[i]= l.data[i]; //en plantillas dice l.top

        i++;
    }

    last = l.last;
}

template<class T, int ARRAYSIZE>
List<T, ARRAYSIZE>::List(): last(-1) {}

template<class T, int ARRAYSIZE>
List<T, ARRAYSIZE>::List(const List<T, ARRAYSIZE>&l){
    copyAll(l);
}

template<class T, int ARRAYSIZE>
bool List<T, ARRAYSIZE>::isEmpty(){
    return last == - 1;
}

template<class T, int ARRAYSIZE>
bool List<T, ARRAYSIZE>::isFull(){
    return last == ARRAYSIZE - 1;
}

template<class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::insertData(const int&p, const T& e){
 if(isFull()){ //revisar este metodo
    throw ListExcep("Desbordamiento de datos, metodo insertData");
    return;
    }

 if(p != -1 and !isValidPos(p)){
    throw ListExcep("Posicion invalida, metodo InsertData");
    return;
    }
 int i(last);
 while(i>p){
    data[i +1] = data[i];

    i--;
    }
    data[p + 1] = e;
    last ++;
}

template<class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::deletData(const int&p){
 if(!isValidPos(p)){
    throw ListExcep("Posicon invalida, metodo delateData");
    return;
    }

    int i(p);
    while(i<last){
        data[i] = data[i + 1];

        i++;
    }

    last --;
}

template<class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getFirtsPos(){
if(isEmpty()){
    return -1;
    }
    return 0;
}

template<class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getLastPos(){
    return last;
}

template<class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getPrevpos(const int& p){
 if(p == getFirtsPos() or !isValidPos(p)){
    return -1;
 }

 return p -1;
}

template<class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getNextpos(const int&p){
 if(p == getLastPos() or !isValidPos(p)){
    return -1;
 }
 return p +1;
}

template<class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::findDataLinear(const T&e){
 int i=0;

   while(i<=last){
        cout<<last<<"ultima poscicion"<<endl;
        cout<<i<<"valor antes de la comparacion"<<endl;
        if(data[i] == e){
            return i;
            cout<<"comparacion "<<i<<endl;
            }
    i ++;
   cout<<i<<"contador"<<endl;
   fflush(stdin);
   }

   return -1;
}

template<class T, int ARRAYSIZE>
T List<T, ARRAYSIZE>::retrieve(const int&p){
 if(!isValidPos(p)){
    throw ListExcep("Posicion invalida, metodo retrieve");
 }
 return data[p];
}

template<class T, int ARRAYSIZE>
string List<T, ARRAYSIZE>::toString(){
 string result;
 int i(0);

 while(i <= last){
    result+= data[i].toString() + "\n";

    i ++;
 }
 return result;
}

template<class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::print(){
 int i(0);

 while(i <= last){
    cout<< data[i++] << ", ";
    }

 cout << endl;
 }

template<class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::deletAll(){
    last = -1;
}

template<class T, int ARRAYSIZE>
List<T, ARRAYSIZE>& List<T, ARRAYSIZE>::operator=(const List<T, ARRAYSIZE>& l){
 copyAll(l);

 return *this;
}

#endif // LISTA_H_INCLUDED
