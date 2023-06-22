#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int elegirTamanio();
float generarAleatorio(float min, float max);
void cargarVectorAleatorio(float v[], int tam);
void mostrarVector(float v[], int tam);
int elegirMetodo();
int elegirMenorOMayor();
void ordenamientoBurbuja(float v[], int tam, int opc, int ord);
void ordenamientoSeleccion(float v[], int tam, int opc, int ord);
void ordenamientoInsercion(float v[], int tam, int opc, int ord);

int main(){

    srand(time(0));

    int dimension = elegirTamanio();
    float vector[dimension];
    cargarVectorAleatorio(vector,dimension);
    mostrarVector(vector,dimension);
    int opcion = elegirMetodo();
    int ordenar = elegirMenorOMayor();
    ordenamientoBurbuja(vector,dimension,opcion,ordenar);
    ordenamientoSeleccion(vector,dimension,opcion,ordenar);
    ordenamientoInsercion(vector,dimension,opcion,ordenar);
    mostrarVector(vector,dimension);


return 0;
}
int elegirTamanio(){

    int dimension;
    printf("Ingrese dimension del vector mayor a 0 :\n");
    scanf("%d",&dimension);

    while (dimension<0){
        printf("Ingrese dimension del vector mayor a 0 :\n");
        scanf("%d",&dimension);
    }

    return dimension;

}
float generarAleatorio(float min, float max){
    float ale;
    ale = min + ((float)rand() / RAND_MAX) * (max - min);
    return ale;
}

void cargarVectorAleatorio(float v[], int tam){

    for(int i = 0; i<tam; i++){
        v[i] = generarAleatorio(0,5);
    }

}

void mostrarVector(float v[], int tam){

    for (int i = 0; i<tam; i++){
        printf("[%.2f] ",v[i]);
    }
    printf("\n\n");
}


int elegirMetodo(){

    int metodo;
    printf("Que metodo va a utilizar?\n");
    printf("1.-Ordenamiento Burbuja.\n");
    printf("2.-Ordenamiento de seleccion.\n");
    printf("3.-Ordenamiento por Insercion.\n");
    printf("Seleccione 1, 2 o 3.\n");
    scanf("%d",&metodo);

    while (metodo < 1 || metodo > 3){
        printf("ERROR!\n");
        printf("Que metodo va a utilizar? : \n");
        printf("1.-Ordenamiento Burbuja.\n");
        printf("2.-Ordenamiento de seleccion.\n");
        printf("3.-Ordenamiento por Insercion.\n");
        printf("Seleccione 1, 2 o 3.\n\n");
        scanf("%d",&metodo);
    }
    return metodo;
}

int elegirMenorOMayor(){

    int ordenar;
    printf("Como quiere ordenarlo?\n");
    printf("1.-De mayor a menor.\n");
    printf("2.-De menor a mayor.\n");
    scanf("%d",&ordenar);

    while(ordenar < 1 || ordenar > 2){
        printf("Como quiere ordenarlo?\n");
        printf("1.-De mayor a menor.\n");
        printf("2.-De menor a mayor.\n");
        scanf("%d",&ordenar);
    }
    return ordenar;
}

void ordenamientoBurbuja(float v[], int tam, int opc, int ord){
float aux;
if(opc == 1 && ord == 2){
    for (int i = 0; i<tam; i++){
        for(int j = 0; j<tam-1; j++){
            if(v[j]>=v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
if (opc == 1 && ord == 1){
    for (int i = 0; i<tam; i++){
        for(int j = 0; j<tam-1.f; j++){
            if(v[j]<=v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
}
void ordenamientoSeleccion(float v[], int tam,int opc,int ord){
int x, y, min;
float tmp;
if(opc == 2 && ord == 2){
    for(x = 0; x < tam; x++){
        min = x;
        for(y = x + 1; y < tam; y++){
            if(v[min] > v[y]){
                min = y; }
            }
        tmp = v[min];
        v[min] = v[x];
        v[x] = tmp;
    }
}
if(opc == 2 && ord == 1){
     for(x = 0; x < tam; x++){
        min = x;
        for(y = x + 1; y < tam; y++){
            if(v[min] < v[y]){
                min = y; }
            }
        tmp = v[min];
        v[min] = v[x];
        v[x] = tmp;
    }
}
}

void ordenamientoInsercion(float v[], int tam,int opc,int ord){
int x,y,m,izq,der;
float tmp;
if(opc == 3 && ord == 2){
    for(x = 1; x < tam; x++){
        tmp = v[x];
        izq = 0; der = x - 1;
        while (izq <= der) {
            m = (izq + der) / 2;
        if(tmp < v[m]){
            der = m - 1;
        }
        else{
            izq = m + 1;
        }
        }
        y = x - 1;
        while (y >= izq) {
            v[y+1] = v[y];
            y = y - 1;
        }
        v[izq] = tmp;
    }
}
if(opc == 3 && ord == 1){
    for(x = 1; x < tam; x++){
        tmp = v[x];
        izq = 0; der = x - 1;
        while (izq <= der) {
            m = (izq + der) / 2;
        if(tmp > v[m]){
            der = m - 1;
        }
        else{
            izq = m + 1;
        }
        }
        y = x - 1;
        while (y >= izq) {
            v[y+1] = v[y];
            y = y - 1;
        }
        v[izq] = tmp;
    }
}
}
