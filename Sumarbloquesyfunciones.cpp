// programa que solicite dos numeros enteros, funcion que sume los numeros principal dos opciones (sumar y no hacer nada)
#include <iostream>
using namespace std;
//las funciones se declaan antes del main
float suma(float x, float y){
    return x+y;
}
float resta(float x, float y){
    return x-y;
}
float mult(float x, float y){
    return x*y;
}
float division(float x, float y){
    return x/y;
}

int main(){

    float a,b;
    int opc;

    cout << "Ingrese el primer entero a=";
    cin >> a;
    cout << "Ingrese el segundo entero b=";
    cin >> b;
    cout<< "Elija la opcion que desea: \n\t1. Sumar \n\t2.resta \n\t3.multiplicacion \n\t4.division \notro numero:salir\n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch(opc){
        case 1:
        cout << "El resultado de "<<a <<"+"<< b <<" es: "<<suma(a,b);
        break;

        case 2:
        cout << "El resultado de "<<a <<"-"<< b <<" es: "<<resta(a,b);
        break;

        case 3:
        cout << "El resultado de "<<a <<"*"<< b <<" es: "<<mult(a,b);
        break;

        case 4:
        cout << "El resultado de "<<a <<"/"<< b <<" es: "<<division(a,b);
        break;

        default:
        cout << "No hice nada";
        break;

    }

    return 0;
}