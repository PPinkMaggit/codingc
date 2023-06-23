#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarVectorTema7(int v[], int t);
int  repetidoTema7(int v[], int t, int b);
int aleatorioTema7(int min, int max);
void mostrarTema7(int v[], int w[], int t, int resul[])


int main() {
printf("---------- TEMA 7 ---------\n");
       printf("---- BENITEZ, Pepe, DNI: 42000000 ---\n");
       int t = 5;
       int vector1[t];
       int vector2[t];
       int r[10];
   
      cargarVectorTema7(vector1, t);
      cargarVectorTema7(vector2, t);
      mostrarGenerico(vector1, t);
      mostrarGenerico(vector2, t);
      mostrarTema7(vector1, vector2, t,r); ///Muestra y carga si lo hacen en dos mejor.
return 0;
}

 void cargarVectorTema7(int v[], int t){
   
      int repetido;
      int ale;
       for ( int i = 0; i<t; i++){
           v[i] = -1;//Para evitar basura, detalle, no lo evalue
   
          do{
           ale = aleatorioTema7(0,9);
           repetido = repetidoTema7(v,t,ale);
   
          }while (repetido == 1);
  
          v[i] = ale;
  
      }
   
  
  };
   
  
  int  repetidoTema7(int v[], int t, int b){
       int repetido = 0 ;
   
      for ( int i = 0 ; i<t; i++){
  
          if(v[i]==b){
               repetido = 1;
           }
       }
   
     return repetido;
  };
int aleatorioTema7(int min, int max){
   
      int n = min + (rand()%(max-min+1));
  
      return n;
   };


  void mostrarTema7(int v[], int w[], int t, int resul[]){
   
      int pos = 0;
   
      for ( int i = t-1; i>-1 ; i--){
   
  
          resul[pos] = v[i];
           pos++;
           resul[pos] = w[i];
           pos++;
  
      }
   
      mostrarGenerico(resul, 2*t);
  
  };
   
  
