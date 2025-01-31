#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAILLE_STOCK 50

typedef char chaine10[11] ;

typedef struct{
chaine10 reference;
int dateEntStock;
} produit;

typedef struct{
    produit pile[TAILLE_STOCK];
    int nbElem;
}t_pile;


const produit ELT_VIDE={"",0};

void saisir(produit *adr_prod, int dateJ);
void afficher(produit prod);
void modifdate(int* adr_datej);
void empiler (t_pile *stock, produit prod);
produit depiler(t_pile *stock);
bool estVide(t_pile stock);
bool estPleine(t_pile stock);
t_pile initialiser();

int main()
{
    int dateJulienne=1;
    int choixUser;
    produit prod;
    t_pile stockProduit;

    stockProduit=initialiser();

    printf("1) entrée d'un produit dans le stock,\n2) vente d'un produit sorti du stock,\n3) le temps passe,\n0) quitter.\n");
    scanf("%d",&choixUser);
    while(choixUser != 0){
        switch(choixUser){
        case 1 :
            saisir(&prod, dateJulienne);
            empiler(&stockProduit, prod);
            afficher(prod);
            break;
        case 2:
            saisir(&prod, dateJulienne);
            depiler(&stockProduit);
            break;
        case 3:
            modifdate(&dateJulienne);
            break;
        }
        printf("1) entrée d'un produit dans le stock,\n2) vente d'un produit sorti du stock,\n3) le temps passe,\n0) quitter.\n");
        scanf("%d",&choixUser);
    }
    return EXIT_SUCCESS; 
}


void saisir(produit *adr_prod, int dateJ)
{
    // met dans *adr_prod un produit saisi au clavier à la date dateJ
    printf("référence ?\n");
    scanf("%s",adr_prod->reference);
    adr_prod->dateEntStock=dateJ;
}


void afficher(produit prod)
{
    // affiche à l'écran le produit prod
    printf("%s %d\n",prod.reference,prod.dateEntStock);
}

void modifdate(int* adr_datej){
    //tourne la page de l'éphéméride
    (*adr_datej)++;
}


void empiler (t_pile *adr_stock, produit prod){
    if (!(estPleine(*adr_stock)))
    {
        adr_stock->pile[adr_stock->nbElem]=prod ;
        (adr_stock->nbElem)++;
    }
    else
    {
        printf("La pile est pleine");
    }
}

produit depiler(t_pile *stock){
    produit prod;
    if (!(estVide(*stock))) {
        prod =stock-> pile[stock-> nbElem-1] ;
        (stock-> nbElem)--;

        stock->pile[stock-> nbElem] = ELT_VIDE;
    }
    else{
        prod = ELT_VIDE;
    }
    return prod;
}

bool estVide(t_pile stock){
    return (stock.nbElem == 0);
}

bool estPleine(t_pile stock){
    return (stock.nbElem == TAILLE_STOCK);
}
produit sommet(t_pile p) { // la pile est un paramètre d’entrée
    produit elt;
    if (!(estVide(p))) {
        // le sommet de la pile est à l’indice p.nbElts - 1
        elt = p.pile[p.nbElem-1];
    }

    else{
        elt = ELT_VIDE; //à définir
    }
    return elt;
}
//void taille

t_pile initialiser(t_pile p) {
    for (int i=0; i<TAILLE_STOCK; i++)
        {
            p.pile[i] = ELT_VIDE; // tous les éléments de la pile sont initialisés
            p.nbElem=0 ;
        }
    return p;
}