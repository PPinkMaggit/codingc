#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 void mostrarGenerico(int v[], int t);
 int aleatorioGenerico(int min, int max);


int main(){

};
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
