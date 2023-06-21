#include<stdio.h>
#include<stdlib.h>
#include<string.h>
///definicion de struct
 struct Estudiante {
 int edad;
 char nombre[20];
 int legajo;



};
// cargarEstructura(struct Estudiante);

void mostrarEstructura(struct Estudiante e);


 int main(){
 printf("-------CLASE DEL 16/6/23------\n");
 printf("----------ESTRUCTURAS--------\n");
 //Las estructuras sirven para guardar muchos datos como un array
 //pero de DISTINTO tipo.

    struct Estudiante variableEstudiante;
    variableEstudiante.edad = 11;
    (strcpy(variableEstudiante.nombre, "Rogelio"));
    variableEstudiante.legajo = 1101101;


    mostrarEstructura(variableEstudiante);



 return 0;
 }
 //void cargarEstructura(struct Estudiante){
/*struct Estudiante variableEstudiante;
variableEstudiante.edad = 11;
strcpy(variableEstudiante.nombre, "Rogelio"));
variableEstudiante.legajo = 1101101;*/

///Carga estatica

void mostrarEstructura(struct Estudiante e){
 printf("--------ESTUDIANTE--------\n");
    printf("EDAD: %d\n",e.edad);
    printf("NOMBRE: %s\n", e.nombre);
    printf("LEGAJO: %d\n", e.legajo);

}

