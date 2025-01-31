#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int POURCENT=100;
int main (){
    char nom[19];
    int salaire_brut,taux,nb,salaire_net;
    float salaire_net_moyen;

    printf(" entrez un taux de charges : \n") ; 
    scanf("%d",&taux) ;
    nb=0;
    salaire_net_moyen=0;
    printf(" entrez un nom ('*' pour finir) : \n") ;
    scanf("%s",nom) ;
    while ( strcmp(nom,"*") !=0 ) {
        printf(" salaire brut : \n") ; 
        scanf("%d",&salaire_brut) ;
        salaire_net=salaire_brut-((salaire_brut*taux)/POURCENT);
        salaire_net_moyen=salaire_net_moyen+salaire_net;
        nb=nb+1;
        printf(" entrez un nom ('*' pour finir) : \n") ; 
        scanf("%s",nom) ;
    }

    if (nb==0)
    {
        printf("Nombre de valeurs : %d donc pas de moyenne de salaire\n",nb);
    }
    else 
    {
        salaire_net_moyen=salaire_net_moyen/nb;
        printf("Salaire net moyen : %.2f\n",salaire_net_moyen) ;
    
    }
    return EXIT_SUCCESS;
}