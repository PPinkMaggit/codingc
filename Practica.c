#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//DEFINICIONES DE LAS FUNCIONES Y PROCEDIMIENTOS
 void mostrarGenerico(int v[], int t);
 int aleatorioGenerico(int min, int max);



int main(){

};
//IMPLEMENTACIONES DE LAS FUNCIONES Y PROCEDIMIENTOS
 void mostrarGenerico(int v[], int t){
      printf("|| ");
    for ( int i = 0; i< t; i++){

          printf("%d ", v[i]);

     }
    printf(" ||\n\n");
  };


  int aleatorioGenerico(int min, int max){
       return min + rand()%(max-min+1);
  };
