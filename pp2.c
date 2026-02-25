/** como ejecutar gcc pp2.c -o pp2 -fopenmp */

# include <stdio.h>
# include <omp.h>

void main(){
    int i;
    i=0;

    #pragma omp parallel shared(i)
    {
        int procesadores;
        int procesador;

        procesadores = omp_get_num_threads();
        procesador = omp_get_thread_num();
printf("se ejecuta el hilo %d de %d, donde i es %d\n",
       procesador, procesadores, i);
        i=i+1;
    }
    printf("contador %d\n", i);
}
