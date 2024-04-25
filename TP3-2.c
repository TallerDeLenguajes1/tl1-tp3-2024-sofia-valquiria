#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*Una empresa necesita simular la producción de los próximos 5 años para tal fin necesita
generar una matriz (estática) de 5x12 donde cada fila corresponde a un año y cada columna
es un mes. Ud. debe realizar las siguientes tareas:
a. Cargue dicha matriz con valores aleatorios entre 10000 y 50000.
b. Muestre por pantalla los valores cargados
c. Saque el promedio de ganancia por año y muestrelos por pantalla
d. Obtenga el valor máximo y el valor mínimo obtenido informando el “año” y el “mes” de
cuándo ocurrió.*/
void main(){
    int produccion[5][12];
    int promedioAnio = 0;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            produccion[i][j] = rand()%40000+10000;
            printf("%d ", produccion[i][j]);
            promedioAnio += produccion[i][j];
        }
        promedioAnio = promedioAnio / 12;
        printf("El promedio del %d° año es: %d \n",i+1,promedioAnio);
    }   
}