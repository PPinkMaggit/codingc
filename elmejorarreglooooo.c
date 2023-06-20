#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pedirTam();
int generarAleatorio(int min, int max);
void cargar(int vec[],int tam);
void imprimir(int vec[], int tam);
int elegirMetodo();
int elegirMayoMen();
void ordenamientoBurbuja(int vec[], int tam,int met,int ord);
void ordenamientoSeleccion(int vec[], int tam, int met,int ord);
void ordenamientoInsercion(int vec[],int tam,int met,int ord);


int main(){
    srand(time(NULL));
    int dimension=pedirTam();
    int vector[dimension];


    cargar(vector,dimension);
    imprimir(vector,dimension);
    printf("\n");
    int opcion=elegirMetodo();
    int ord=elegirMayoMen();
    ordenamientoBurbuja(vector,dimension,opcion,ord);
    ordenamientoSeleccion(vector,dimension,opcion,ord);
    ordenamientoInsercion(vector,dimension,opcion,ord);
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
        vec[i]=generarAleatorio(10,99);

    }
}
void imprimir(int vec[], int tam){
    for(int i=0; i<tam; i++) {
        printf("[ %d ]",vec[i]);
    }


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
int elegirMayoMen(){int mayome;
    printf("como desea ordenarlo? \n");
    printf("1.-Mayor.\n");
    printf("2.-Menor.\n");
    printf("Seleccione 1 o 2.\n");
    scanf("%d",&mayome);

    while (mayome < 1 || mayome > 3){
        printf("ERROR!\n");
        printf("Que metodo va a utilizar? : \n");
        printf("1.-Ordenamiento Burbuja.\n");
        printf("2.-Ordenamiento de seleccion.\n");
        printf("3.-Ordenamiento por Insercion.\n");
        printf("Seleccione 1, 2 o 3.\n\n");
        scanf("%d",&mayome);
    }
    return mayome;





}
void ordenamientoBurbuja(int vec[], int tam, int met,int ord){
    int aux;
if(met == 1 && ord == 2){
    for (int i = 0; i<tam; i++){
        for(int j = 0; j<tam-1; j++){
            if(vec[j]>=vec[j+1]){
                aux = vec[j];
                vec[j]=vec[j+1];
                vec[j+1] = aux;
            }
        }
    }
}
if (met == 1 && ord == 1){
    for (int i = 0; i<tam; i++){
        for(int j = 0; j<tam-1; j++){
            if(vec[j]<=vec[j+1]){
                aux = vec[j];
                vec[j]=vec[j+1];
                vec[j+1] = aux;
            }
        }
    }
}
}

void ordenamientoSeleccion(int vec[], int tam,int met,int ord){
    if (met==2 && ord==2) {
        int x, y, min, tmp;
        for(x=0; x < tam; x++) {
            min= x;
            for (y = x + 1; y < tam; y++) {
                if (vec[min]> vec [y]) {
                    min= y;
                }
            }
            tmp= vec[min];
            vec[min]=vec[x];
            vec[x]= tmp;

        }}
        if (met==2 && ord==1){  int x, y, min, tmp;
                for(int x=0; x < tam; x++) {
             min= x;
            for (y = x + 1; y > tam; y++) {
                if (vec[min]< vec [y]) {
                    min= y;
                }
            }
            tmp= vec[min];
            vec[min]=vec[x];
            vec[x]= tmp;


            ///ACA VA EL MENOR
        }

}
}
void ordenamientoInsercion(int vec[],int tam,int met,int ord){
    if (met==3 && ord==2) {
    int x,m,y,tmp,izqrd,derch;
    for (x = 1; x < tam; x++) {
        tmp = vec[x];
        izqrd = 0; derch = x - 1;
        while (izqrd <= derch){
            m=(izqrd+derch)/2;
            if (tmp < vec [m]) {
                derch= m -1;}
                else{ izqrd = m +1;
                } }
                y = x -1;
                while (y >= izqrd) {
                 vec [y+1]=vec[y];
                 y=y-1;
                } vec[izqrd] = tmp;}
            }
            if (met==3 && ord==1) {  int x,m,y,tmp,izqrd,derch;
                    for ( x = 1; x < tam; x++) {
                        tmp = vec[x];
                        izqrd = 0; derch = x - 1;
                            while (izqrd >= derch){
                                m=(izqrd+derch)/2;
                                if (tmp > vec [m]) {
                                    derch= m -1;}
                                else{ izqrd = m +1;
                                } }
                                    y = x -1;
                            while (y <= izqrd) {
                                    vec [y+1]=vec[y];
                                    y=y-1;
                                } vec[izqrd] = tmp;}}}





