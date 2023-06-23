#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generarAleatorio(int min, int max);
void mostrarVector(int v[], int tam);
int pedirTam();
void cargarVector(int v[], int tam);
void mostraPosImpar(int v[],int tam);
void mostrarMayYMen50(int v[], int tam);

int main(){
int t;

t=pedirTam();
int vector[t];
cargarVector(vector,t);
mostrarVector(vector,t);
mostraPosImpar(vector,t);
mostrarMayYMen50(vector,t);

return 0;
}

int generarAleatorio(int min, int max){
 int aleatorio;
 aleatorio=min+rand()%(max-min+1);
 return aleatorio;
};
void mostrarVector(int v[], int tam){
    printf("||");
    for (int j = 0; j<tam; j++){
        printf("|%d| ",v[j]);
    }
    printf("||\n");
};
int pedirTam(){
    int tamanio;
    do {

        printf("ingrese un tamanio, de 11 a 29,\n");
        printf("que no se pueda dividir ni por 2 ni por 5:");
        scanf("%d",&tamanio);

        }while(tamanio<11 || tamanio>29 || tamanio%2==0 || tamanio%5==0);

    return tamanio;
};
cargarVector(int v[],int tam){


        for (int i=0; i<tam; i++){

            v[i]=2*(generarAleatorio(5,49));
            //En este caso como se pide que los numeros que se generen aleatoriamente
            //Deben ser pares y de dos cifras el min sera 5, porque 2*5=10 y el max
            //sera 49 porque 2*49=98.

        }//cierre del for

};
void mostraPosImpar(int v[],int tam){
    printf("||");
        for (int i= 1; i<tam; i+=2){

            printf("%d ", v[i]);

        }//cierro el for
        printf("||");
};
void mostrarMayYMen50(int v[], int tam){
    int mayor = -1;

    for (int i = 0; i<tam; i++){
            if (v[i]> mayor && v [i]< 50){
                mayor = v[i];
            }//End if
}//end for
if (mayor != -1){
    printf("\nEl mayor de los menores a 50 es: %d", mayor);
}//end if
else {
    printf("\nNinguno es menor a 50.");
}//End else

};
