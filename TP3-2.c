#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int produccion[5][12];
    int promedioAnio;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            produccion[i][j] = rand()%40000+10000;
            printf("%d ", produccion[i][j]);
            
        }
        printf("\n");
    }
    
}