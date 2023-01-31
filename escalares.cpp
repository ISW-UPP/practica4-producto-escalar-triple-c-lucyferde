// escalares.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    int vector1[2];
    int vector2[2];
    int vector3[2];
    double escalarTriple;
    double escalarA,vecI;
    double escalarB,vecJ;
    double escalarC,vecK;
    int i, j, k;
    double i1, j1, k1;
    for (i = 0; i <= 2; i++) {
        cout << "introduce el numero:" << endl;
        cin >> vector1[i];
    }

    for (j = 0; j <= 2; j++) {
        cout << "introduce el numero:" << endl;
        cin >> vector2[j];
    }
    for (k = 0; k <= 2; k++) {
        cout << "introduce el numero:" << endl;
        cin >> vector3[k];
    }
    vecI = ((vector2[1] * vector3[2]) - (vector3[1] * vector2[2]));
    vecJ = ((vector1[1] * vector3[2]) - (vector3[1] * vector1[2]));
    vecK = ((vector1[1] * vector2[2]) - (vector2[1] * vector1[2]));

    escalarA = ((vector2[1] * vector3[2]) - (vector3[1] * vector2[2])) * vector1[0];
    escalarB = ((vector1[1] * vector3[2]) - (vector3[1] * vector1[2])) * vector2[0];
    escalarC = ((vector1[1] * vector2[2]) - (vector2[1] * vector1[2])) * vector3[0];

    escalarTriple = escalarA - escalarB + escalarC;
    cout << endl;

    cout << "el producto escalar triple es:"<<escalarTriple<<endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
