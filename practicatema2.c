#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//funciones y procedimientos (void)
///DEFINICIONES
//Tipo---nombreFuncion ---- (argumentos);
void mostrarTitulo(int dia, int mes, int comision);

void mostrarRectangulo(int b, int h, char c);

int cargarVector(int tam int vector[], int busqueda);
///FUNCIONES
int maximo(int n1, int n2);

int main () {
    srand(time(0));
    int c=3000;
    int d=1;
    int m=6;
    mostrarTitulo(d,m,c);
    int altura = 5;
    int base = 10;
    int caracter= 'R';


    mostrarRectangulo(base,altura,caracter);
    int r= maximo(11,89); //NO ES BUENO QUE
    //LA FUNCION HAGA MAS DE UNA COSA.
    printf("\n--> %d ", r);


return 0;
}
///IMPLEMENTACIONES
void mostrarTitulo(int dia, int mes, int comision) {
    printf("\n-----> %d / %d / %d \n",dia, mes, comision);



}
void mostrarRectangulo(int b, int h, char c) {
    for (int i=0; i<h; i++){
        for (int j = 0; j<b; j++){
            printf("%c ",c);
        }
        printf("\n");
    }
}
int maximo(int n1, int n2){
    int resultado=n1;
    if ( n2 > n1){
    resultado= n2;
    }


    return resultado;
    //"resultado" es una variable local.
}

int cargarVector(int tam int vector[], int busqueda){
    vector
    ///Busqueda secuencial

}
