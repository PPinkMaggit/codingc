#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///FUNCIONES Y PROCEDIMIENTOS:
void cargarVector(int v[],int tam);
void mostrarVector( int v[], int tam);
float calcularPromedio(int w[], int tam2);
int busquedaLineal( int v[], int tam, int busqueda);//busqueda secuencial

int main() {

 int tam=5;
 int vector[tam];

 cargarVector(vector,tam);
 mostrarVector(vector,tam);
 calcularPromedio(vector,tam);
 printf("su busqueda esta en la posicion... %d", busquedaLineal(vector,tam,45));



return 0;
}

void cargarVector(int v[],int tam){
    for (int i = 0; i<tam; i++){
        v[i]=10+rand()%89;
    }
}
void mostrarVector( int v[], int tam){
    for (int i = 0; i<tam; i++){
            printf("| %d |",v[i]);

    }
}
float calcularPromedio(int w[], int tam2){
       float suma=0;
       float prom=0;
     for (int i = 0; i<tam2; i++){
            suma+=w[i];
        }
        prom=suma/tam2;
        printf("Su coso es %.3f ", prom);
}
int busquedaLineal( int v[], int tam, int busqueda){
        int posicion=-1;

        for (int i = 0; i<tam; i++){
         if (v[i]==busqueda){
            posicion=i;


}
}
return posicion;
}
