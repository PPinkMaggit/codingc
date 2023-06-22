#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elegirTamanio();
void cargarVectorAleatorio(int v[], int tam);
void mostrarVector(int v[], int tam);
int posMin(int v[], int tam);
int posMax(int v[], int tam);
int minVector(int v[], int tam);
int maxVector(int v[], int tam);
float promVector(int v[], int tam);
void sumaVectores(int v[], int w[], int resultado[], int tam);
void restaVectores(int v[], int w[], int resultado[], int tam);
int aleatorioEntre(int mini, int maxi);
void cargarVectorConAleatorios(int v[], int tam, int mini,int maxi);
void cargarVectorConAleatoriosSinRepetir(int v[], int tam, int mini,int maxi);

int main(){

    srand(time(0));

    int tam = elegirTamanio();
    int vector[tam];
    int vector2[tam];
    int resultado = 0;

    cargarVectorAleatorio(vector,tam);
    cargarVectorAleatorio(vector2,tam);
    mostrarVector(vector,tam);
    int posicionMinima = posMin(vector,tam);
    printf("el valor minimo esta en la posicion: %d\n",posicionMinima+1);
    int posicionMaxima = posMax(vector,tam);
    printf("el valor maximo esta en la posicion: %d\n",posicionMaxima+1);
    int valorMinimo = minVector(vector,tam);
    printf("el valor minimo es: %d\n",valorMinimo);
    int valorMaximo = maxVector(vector,tam);
    printf("el valor maximo es: %d\n",valorMaximo);
    float prom = promVector(vector,tam);
    printf("el promedio del vector es:%d\n",prom);
    sumaVectores(vector,vector2,resultado,tam);
    restaVectores(vector,vector2,resultado,tam);
    int aleatorioEntre(minimo,maximo);



return 0;
}

int elegirTamanio(){

    int tamanio = 0;
    printf("Ingrese numero mayor a 0 y menor a 170:\n");
    scanf("%d",&tamanio);


        if (tamanio<=0 || tamanio>=170){
            while (tamanio<=0 || tamanio>=170){
                printf("Ingrese numero mayor a 0 y menor a 170:\n");
                scanf("%d",&tamanio);}
            }
        else{
            return tamanio;
            }

}

void cargarVectorAleatorio(int v[], int tam){

    for (int i = 0; i<tam; i++){
        v[i] = 0-(rand()%9);
    }

}

void mostrarVector(int v[], int tam){

    for (int j = 0; j<tam; j++){
        printf("|%d| ",v[j]);
    }
    printf("\n");
}

int posMin(int v[], int tam){
    int posMinima=0;

    for (int k = 0; k<tam; k++){

        if (v[k]<v[posMinima]){
            posMinima = k;
        }

    }
    posMinima = 0;
    return posMinima;


}

int posMax(int v[], int tam){
    int posMaxima=0;

    for (int l = 0; l<tam; l++){

        if (v[l]>v[posMaxima]){
            posMaxima = l;
        }

    }

    return posMaxima;


}

int minVector(int v[], int tam){
    int minValor = v[0];
    for (int z; z<tam; z++){
        if (v[z]<v[minValor]){
            minValor = v[z];
        }

    }

    return minValor;

}

int maxVector(int v[], int tam){
    int maxValor = v[0];

    for (int x; x<tam; x++){
        if (v[x]>v[maxValor]){
            maxValor = v[x];
        }
    }
    return maxValor;

}

float promVector(int v[], int tam){

    float suma = 0;

    for (int c = 0; c<tam; c++){
        suma += v[c];
    }

    float promedio = suma/tam;
    return promedio;

}

void sumaVectores(int v[], int w[], int resultado[], int tam){

    int res = 0;

    for (int q = 0; q<tam; q++){
        res = v[q] + v[q];
    }
    printf("el resultado de la suma de vectores es: %d\n",res);
}

void restaVectores(int v[], int w[], int resultado[], int tam){

    int rest = 0;

    for (int i = 0; i<tam; i++){
        rest = v[i] - w[i];
    }
    printf("el resultado de la resta de vectores es: %d\n",rest);

}
