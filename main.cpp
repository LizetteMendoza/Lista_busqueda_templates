#include <iostream>
#include"lista.h"
#include"cancion.h"
#include"menu.h"

using namespace std;

int main()
{
    List<Cancion>a;

    Menu myMenu(a);

    /*Cancion miCancion;
    string myStr;
    char op;
    int pos, opc;

     do{
        fflush(stdin);
        cout<<"\nMENU DE OPCIONES LISTA DE CANCIONES"<<endl;
        cout<<"1.- INICIALIZA"<<endl;
        cout<<"2.- VACIA"<<endl;
        cout<<"3.- INSERTAR DATO"<<endl;
        cout<<"4.- ELIMINAR DATO"<<endl;
        cout<<"5.- RECUPERAR"<<endl;
        cout<<"6.- PRIMERA POSICION"<<endl;
        cout<<"7.- ULTIMA POSICION"<<endl;
        cout<<"8.- POSICION ANTERIOR"<<endl;
        cout<<"9.- POSICION SIGUIENTE"<<endl;
        cout<<"10.-MOSTRAR LISTA"<<endl;
        cout<<"11.-BUSCAR"<<endl;
        cout<<"12.-ANULA"<<endl;
        cout<<"0.-SALIR"<<endl;
        cin>>opc;


   switch(opc){

       case 1:  myList.deletAll(); //La lista se inicializa en el contructor pero si se quisiera usar un metodo deletAll harìa la misma funcion
                cout<<endl<<"La lista está inicializada";
                break;

       case 2:  if(myList.isEmpty()==1){
                    cout<<"La lista esta vacia";
                    }
                else cout<<"La lista tiene elementos";
                break;

       case 3:  do{
                    fflush(stdin);
                    cout<<endl<<"Nombre: ";
                    getline(cin, myStr);
                    miCancion.setNombre(myStr);
                    cout<<"Autor: ";
                    getline(cin, myStr);
                    miCancion.setAutor(myStr);
                    cout<<"Interprete: ";
                    getline(cin, myStr);
                    miCancion.setInterprete(myStr);
                    cout<<"MP3 nombre: ";
                    getline(cin, myStr);
                    miCancion.setMp3(myStr);
                    cout<<"posicion: ";
                    getline(cin, myStr);
                    miCancion.setPosicion(atoi(myStr.c_str()));
                    myList.insertData(myList.getFirtsPos(), miCancion);

                    cout<<endl<<"Do you wan to keep adding song? y/n: ";
                    cin>>op;

            }while(op!= 'n');
            cout<<endl<<myList.toString();
            break;

       case 4:  cout<<"Ingrese la posicion que desea eliminar: ";
                cin>>pos;
                myList.deletData(pos-1);
                cout<<myList.toString()<<"\n";
                break;

       case 5:  cout<<"Ingrese la posicion que desea ver: ";
                cin>>pos;
                cout<<endl<<myList.retrieve(pos-1).toString();
                cout<<endl<<myList.toString()<<"\n";
                break;

       case 6:  cout<<endl<<myList.retrieve(myList.getFirtsPos()).toString();
                break;

       case 7:  cout<<endl<<myList.retrieve(myList.getLastPos()).toString();
                break;

       case 8:  cout<<"Ingrese la posicion referencia: ";
                cin>>pos;
                cout<<endl<<myList.retrieve(myList.getPrevpos(pos-1)).toString();
                break;

       case 9:  cout<<"Ingrese la posicion referencia: ";
                cin>>pos;
                cout<<endl<<myList.retrieve(myList.getNextpos(pos-1)).toString();
                break;
       case 10: cout<<"Contenido actual de la lista: ";
                cout<<endl<<myList.toString()<<endl;
                break;
       case 11: myList.deletAll();
                cout<<endl<<"La lista ha sido borrada";

       }
   }while(opc!=0);*/

    return 0;
}
