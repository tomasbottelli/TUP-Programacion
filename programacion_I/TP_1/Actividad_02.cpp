/*Hacer un programa para cargar un vector de números enteros de 10 elementos. 
Calcular e informar: 
- El mínimo valor del vector. 
- La primera posición en la que aparece el mínimo valor dentro del vector. 
- La cantidad de veces que aparece el mínimo valor dentro del vector.
*/
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;
#include "funciones.h"

int main()
{
    int size = 10;
    int vec[size];
    int n;
    cargarVector(vec, size);
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Mostrar minimo valor del vector" << endl;
    cout << "2. Mostrar la primera posicion del maximo valor" << endl;
    cout << "3. Mostrar la cantidad de veces que aparece el maximo valor dentro del vector" << endl;
    cout << "0. Cerrar" << endl;
    cout << "***************" << endl;
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << vec[minimoVector(vec, size)];
        break;
    case 2:
        cout << minimoVector(vec, size);
        break;
    case 3:
        cout << contarNumerosRepetidos(vec, vec[minimoVector(vec, size)], size);
        break;
    default:
        return 0;
        break;
    }
}