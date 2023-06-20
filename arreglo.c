#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pedirTam();
int generarAleatorio(int min, int max);
void cargar(int vec[],int tam);
void imprimir(int vec[], int tam);


int main(){
    srand(time(NULL));
    int dimension=pedirTam();
    int vector[dimension];
    cargar(vector,dimension);
    imprimir(vector,dimension);

return 0;
}

int pedirTam(){
    int tamanio;
    printf("Ingrese dimension del vector: ");
    scanf("%d",&tamanio);

    return tamanio;
}
int generarAleatorio(int min, int max){
 int aleatorio;
 aleatorio=min+rand()%(max-min+1);
 return aleatorio;
}
void cargar(int vec[],int tam){
    for (int i=0; i<tam; i++){
        vec[i]=generarAleatorio(10,40);

    }
}
void imprimir(int vec[], int tam){
    for(int i=0; i<tam; i++) {
        printf("[ %d ]",vec[i]);
    }


}
