#include <iostream>
#include <string.h>

using namespace std;

struct amigos
{

    char nombre[20];
    char apellidos[50];
    int edad;

}

amigo1 = {"Arancha ", "Fernandez", 42},
amigo2 = {"Manu ", "Estrada", 47};

int main()
{

    cout << "Nombre: " << amigo1.nombre << endl;
    cout << "Apellidos: " << amigo1.apellidos << endl;
    cout << "Edad: " << amigo1.edad << endl;

    cout << "\nNombre: " << amigo2.nombre << endl;
    cout << "Apellidos: " << amigo2.apellidos << endl;
    cout << "Edad: " << amigo2.edad << endl;

    system("PAUSE");
    return 0;
}