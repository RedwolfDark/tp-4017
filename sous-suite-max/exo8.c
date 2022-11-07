#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int *nb = NULL, somme = 0;
    int nbTotal = 0, nbConsecutif = 0, maximum  = 0, compteurBoucle = 0;
    int i, j, k;
 
    scanf("%d", &nbTotal);
    nb = malloc(nbTotal *sizeof(int));
 
    scanf("%d", &nbConsecutif);
    compteurBoucle = nbConsecutif;
 
    for( i=0; i < nbTotal; i++)
        scanf("%d", &nb[i]);
 
    for( i= 0; i < (nbTotal-nbConsecutif); i++)
    {
        somme = 0;
        k = 0;
        for( j=i; k< nbConsecutif; j++)
        {
            somme+=nb[j];
            k++;
        }
 
        if(somme > maximum)
            maximum = somme;
    }
 
    printf("%d", maximum);
 
    free(nb);
    return 0;
}