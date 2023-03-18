#include <stdio.h>

int cuadradoNum(int x);
void cuadradoNumero(int x);
void variable(int x);
void invertir(int a, int b);
void orden(int a, int b);

int main(){

int x, n;
int a, b;
int accion;

printf("Ingrese un numero:\n");
scanf("%d", &x);

n = cuadradoNum(x);

printf("a)El numero %d al cuadrado es igual a %d\n", x, n);

cuadradoNumero(x);

variable(x);

printf("Ingrese dos pares de numeros:\n");
printf("a:");
scanf("%d", &a);
printf("\nb:");
scanf("%d", &b);

printf("Seleccione la funcion a aplicar:\n1_funcion invertir\n2_funcion ordenar\n");
scanf("%d", &accion);

switch (accion)
{
case 1:
    invertir(a,b);
    break;

case 2:
    orden(a,b);
    break;

}
    return 0;
}

int cuadradoNum(int x){

    int a;

  for (int i = 0; i < 2; i++)
  {
    a = x * x;

  }
  
    return(a);

}

void cuadradoNumero(int x){
    int b;
    b = x * x;

    printf("b)El numero %d al cuadrado es igual a %d\n", x, b);
}

void variable(int x){

    printf("La direccion de memoria de la variable es %d\n", &x);
    printf("El contenido de la variable es %d\n", x);
}

void invertir(int a, int b){
  int c;

    c = a;

    a = b;
    b = c;

    printf("Ahora el valor de la variable a es %d y el de la variable b es %d\n",a, b);
}

void orden(int a, int b){
    int c;

    c = a;

    if (a>b)
    {
    printf("El valor de a es %d y el de b es %d", a, b);
    }else
    {
        a = b;
        b = c;

         printf("El valor de a es %d y el de b es %d", a, b);
    }
    
    


}