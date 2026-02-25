/* para la ejecucion es  gcc pp3.c -o pp3 -lm  */


#include <stdio.h>
#include <math.h>

void main(){
    int n;
    printf("introduce un n\n");
    scanf("%d", &n);

    double ro, fn;
    ro = (1+sqrt(5))/2;
    fn = (pow(ro,n) - pow(pow(-ro,-1),n))/sqrt(5);
    printf("fn = %f\n", fn);
}
