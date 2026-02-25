#include <stdio.h>

/** el & sirve para obtener la dirección de memoria de una variable */


int suma(int a, int b){
    return a+b;
}

/** el * sirve como el return devuele el valor a l que tiene ese simbolo*/
/** void es un metodo osea no devuelve nada  */
void sumapro(int a, int b, int *c){
    *c = a+b;
}

/** la multiplicacion es la suma de un numero por si mismo un numero de n veces */
void multipro(int a, int b, int *c){
    int i;
    *c=0;
    for(i=0;i<b;i++)
        *c=*c+a;
}



void multipro2(int a, int b, int *c){
    int i;
    *c=0;
    for(i=0;i<a;i++)
        sumapro(*c,b,*&c);
}


void multipro3(int a, int b, int *c){
    int i;
    *c=0;
    for(i=0;i<a;i++)
        sumapro(*c,b,c);
}


/** TAREA: es ahacer lo mismo en c# y en java para la siguiente clase */



int main() {
    int a, b,c,d,e,f;
    printf("Hola Mundo\n");
    printf("introduzca dos numeros\n");

    scanf("%d", &a);
    scanf("%d", &b);

    c = suma(a, b);
    printf("la suma de %d y %d es %d\n", a, b, c);

    sumapro(a,b,&d);
    printf("la suma de %d y %d es %d\n", a, b, d);
    
    multipro(a,b,&d);
    printf("la multiplicacion de %d y %d es %d\n", a, b, d);

    multipro2(a,b,&e);
    printf("la multiplicacion de %d y %d es %d\n", a, b, e);

    multipro3(a,b,&f);
    printf("la multiplicacion de %d y %d es %d\n", a, b, f);
    return 0;
}
