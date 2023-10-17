#include<stdio.h>

int main(){
    int v;
    printf(" Entrez une valeur entiere : \n ");
    scanf("%i",&v);
    printf(" on a v= %i\n ",v);
    if(v>10){
        printf(" on a v superieur a 10\n ");
    }
            else{
            printf(" on a v inferieur ou egal à 10\n ");
            }
    return 0;
}