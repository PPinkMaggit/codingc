#include <stdio.h>

int main(){

//un arreglo es una caja con varios elementos o datos. Pueden ser definidos con cualquier tipo de dato.
    printf("- - - - - - V E C T O R E S - - - - - \n");

    int vector[] = {0,1,2,3,4,5}; //donde vector es el nombre de la variable, dentro de los corchetes va la posicion, le asignamos en este caso 6 elementos entre llaves.
    int i;
    printf("El valor de la posicion 0 es: %i.\n\n",vector[0]); // en este caso imprime el valor 0.

    for (i = 0 ; i < 6; i++){ // en este caso "6" son los elementos dentro de la variable vector.
        printf("%i",vector[i]); // donde i representa la posicion dentro de la variable vector, muestra elemento x elemento de izquierda a derecha.
    }
    printf("\n");
    for (i = 5 ; i >= 0  ; i--){ // en este caso imprimimos de derecha a izquierda empezando en la posicion 6
        printf ("%i",vector[i]);
    }
    printf("\n");

    // --------------------------------------------------------------------------------------------------------//

    int vectorB[10];

    for (i = 0; i < 10; i++){
        printf("Ingrese un valor para el vector en la posicion %i: ",i);
        scanf("%i",&vectorB[i]);
    }
    printf ("{");
    for (i = 0; i < 10; i++){
        printf ("%i,",vectorB[i]);
    }
    printf ("}");



return 0;
}
