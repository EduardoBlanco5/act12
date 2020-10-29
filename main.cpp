#include <iostream>
#include "ArregloDinamico.h"
using namespace std;

void Modificar(int *a)
{

}

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final(5);
    arreglo.insertar_final(4);
    arreglo.insertar_final(3);
    arreglo.insertar_final(2);
    arreglo.insertar_inicio(6);

    for(size_t i = 0; i< arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    
    system("pause");
}