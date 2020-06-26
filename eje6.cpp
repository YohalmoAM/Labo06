/*Ejercicio 6:Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces
se repite dicho número en el arreglo.*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main (){

    int n,rep,conta;
    conta =0;

    cout<<"Ingrese la cantidad de datos : "; cin>>n;

    int vector[n];

    for(int i=0; i<n; i++){
        cout<<"Ingrese un dato: "; cin>>vector[i];
    }

    cout << "Su Arreglo es : [";
    for(int i=0; i<n; i++){
        cout<< vector[i]<< " "; 
    }
    cout<<"]";
    cout<<endl;
    cout<<"Ingrese el numero que desea saber cuantas veces se repite:";
    cin>>rep;

    for(int i=0; i<n; i++){
        if(rep == vector[i])

        conta++;

    }
cout<<"El numero "<<rep<<" se repite un total de: "<<conta<<" veces.";

    return 0;
}