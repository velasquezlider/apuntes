/** como ejecutar gcc pp1.c -o pp1 -fopenmp */

# include <stdio.h>
# include <omp.h>

int main(void){

    #pragma omp parallel
    {
            int procesadores;
    int procesador;
        procesadores = omp_get_num_threads();
        procesador = omp_get_thread_num();
        printf(" se ejecuta el hilo %d de %d\n", procesador, procesadores);
    }
}
