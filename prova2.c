/****************************************************
* Item 5 Prova 2 - Programaзгo C
*
* ALUNO: Caio Prujansky
*
*****************************************************/
#include <stdio.h>
#include <stdlib.h>

float calc_media(float *medidas, int nmed);

float converte_ms_kmh(float vms);

int main()
{
    float vmedia, vkmh;

    float vlida[] = {5.9, 4.6, 5.3, 12.1, 7.9};

    vmedia = calc_media(vlida, 5);
    printf("A velocidade media em m/s eh: %f\n", vmedia);
    vkmh = converte_ms_kmh(vmedia);
    printf("A velocidade media em km/h eh: %f\n", vkmh);
    return 0;
}

float calc_media(float *medidas, int nmed)
{
    int k;
    float media = 0;

    for(k=0; k <nmed; k++)
    {
        media += *medidas;
        medidas++;
    }
    media = media / k;

    return (media);
}

float converte_ms_kmh(float vms)
{
    float kmh;

    kmh = vms * 3.6;

    return(kmh);
}
