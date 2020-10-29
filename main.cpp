#include <iostream>
#include "ArregloDinamico.h"
using namespace std;

int main()
{
    ArregloDinamico arreglo;

    arreglo.insertar_final("A"); 
    arreglo.insertar_final("N"); 
    arreglo.insertar_final("C"); 
    arreglo.insertar_final("O"); 
    arreglo.insertar_final(" "); 
    arreglo.insertar_final("G"); 
    arreglo.insertar_final("L"); 
    arreglo.insertar_final("Z");
    arreglo.insertar_inicio("L"); 
    arreglo.insertar_inicio("B"); 

    for(size_t i = 0; i< arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout <<"\n"<<endl;
    
    system("pause");
}