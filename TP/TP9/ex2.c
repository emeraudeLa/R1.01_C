#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define X 4
#define Y 4
typedef float sport[X];
typedef float matrice[X][Y] ;

const float CONT_CYCLISME= 0.9;
const float CYCLI_FOOT = 0.03;
const float CYCLI_VOILE=0.02;
const float CYCLI_INAC=0.05;

const float CONT_FOOT= 0.8;
const float FOOT_CYCLI = 0.06;
const float FOOT_VOILE=0.03;
const float FOOT_INAC=0.11;

const float CONT_VOILE= 0.75;
const float VOILE_CYCLI = 0.08;
const float VOILE_FOOT=0.02;
const float VOILE_INAC=0.15;

const float CONT_INAC= 0.88;
const float INAC_CYCLI = 0.05;
const float INAC_FOOT=0.03;
const float INAC_VOILE=0.04;

const int CYCLI=35;
const int FOOT=25;
const int VOILE=20;
const int INAC=20;



int main (){
    //printf("Cyclisme :\ncontinuent:%d, passent au foot : %d, passent à la voile : %d, deviennent inactifs : %d",(CYCLI*CONT_CYCLISME),CYCLI*CYCLI_FOOT,CYCLI*CYCLI_VOILE,CYCLI*CYCLI_INAC);
    matrice m={{0.90,CYCLI_FOOT,CYCLI_VOILE,CYCLI_INAC},
               {CONT_FOOT,FOOT_CYCLI,FOOT_VOILE,FOOT_INAC},
               {CONT_VOILE,VOILE_CYCLI,VOILE_FOOT,VOILE_INAC},
               {CONT_INAC,INAC_CYCLI,INAC_FOOT,INAC_VOILE}};
    sport v={30,FOOT,VOILE,INAC};
    sport tab;
    for (int j=0; j<Y; j++)
    {
        tab[j]=0;
        for (int k=0; k<X; k++)
        {
            tab[j]+=v[k]*m[k][j];
        }
    }
    for (int j=0; j<Y; j++)
    {
        for (int k=0; k<X; k++)
        {
            printf("%6.2f",tab[j]);
        }
        printf("\n");
    }
    


    return EXIT_SUCCESS;
}

/*
V*M
for (int j=0; j<M; j++)
{
    res[j]=0;
    for (int k=0; k<M; k++)
    {
        res[j]+=v[k]*M[k][j];
    }
}
*/