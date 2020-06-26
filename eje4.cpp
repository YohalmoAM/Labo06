#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

//Declarando Funciones:
   void lee (int, int[]);
   void sum (int[], int[], int, int[]);
   void res (int[], int);

//Funcion Principal:
int main (){

    int n;

    do{
    cout << "Ingrese la cantidad de datos que contendran los vectores: ";
    cin >> n;
   cout<<endl;}

    while(n<=0);
    int vec1[n],vec2[n],vec3[n];

cout << "Ingrese los datos del primer vector: "<< endl;
lee(n,vec1);

    cout<<endl;

cout << "Ingrese los datos del segundo vector: " << endl;
    lee(n,vec2);

sum(vec1,vec2,n, vec3);
    res(vec3,n);
    cout<<endl;

    getch();
    
    return 0;
}
//Definicion de variables:
void lee (int n, int vec[])
{
    int i;
    for (i=0; i<n; i++){
        cout<<"Ingrese un dato: ";
        cin>>vec[i];
    }
}
void sum(int vec1[], int vec2[], int n, int vec3[])
{
    int i;
    for (i=0; i<n; i++){
        vec3[i] = vec1[i] + vec2[i];
    }
}
void res(int vec3[], int n)
{
    int i;
    cout<<"La suma de ambos vectores es : [ ";
    for (i=0; i<n; i++){
        cout << vec3[i]<< " "; 
    }
    cout<<"]";
}