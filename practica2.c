#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int elegirTamanio();
    void mostrarGenerico(int v[],int tam);
    int generarAleatorio(int min,int max);
    void cargarArreglo(int v[],int tam);
    void mostrarArregloInvertido(int v[], int t);
    void mostrarPromedioDe7(int v[], int tam);

    int main(){
        srand(time(NULL));
        printf("----------------\n");
        int t = elegirTamanio();
        int vector[t];
        cargarArreglo(vector, t);
        mostrarGenerico(vector,t);
        mostrarArregloInvertido(vector,t);
        mostrarPromedioDe7(vector,t);



    return 0;
    }
    int elegirTamanio(){
        int t;
        do {
            printf("ingresar un tamanio impar de dos cifras:\n");
            scanf("%d", &t);
        }while (t%2 == 0 || t >99 || t< 10);
        return t;
    }

    void mostrarGenerico(int v[],int tam) {

        for (int i=0; i<tam; i++){
            printf("%d",v[i]);
        }//cierre del for
        printf("\n");

    };
    int generarAleatorio(int min,int max) {

        return min+ rand()%(max-min+1);

    };
    cargarArreglo(int v[], int tam){

        for (int i = 0; i<tam; i++){

            v[i]= -(generarAleatorio(100,999));
            //arroja unicamente resultados negativos.
        }
    };

    void mostrarArregloInvertido(int v[], int tam){

        printf("arreglo invertido: ||");
        for (int i = tam-1; i>-1; i--){
            printf("%d", v[i]);

        }//cierre del for
        printf(" ||\n");
    };
    void mostrarPromedioDe7(int v[], int tam){

        int suma7 = 0;
        int contador = 0;
        float prom = 0;

        for (int i=0; i<tam; i++){
            if (v[i]%7==0){
                suma7+=v[i];
                contador++;
            }//cierro el if
        }//cierro el for

        if(contador !=0){
            prom = suma7/((float)contador);
            printf("\PROM: %f", prom );
        }//cierre del segundo if
        else {
            printf("No se puede calcular el promedio!");
        }
    }//cierre de implementacion
