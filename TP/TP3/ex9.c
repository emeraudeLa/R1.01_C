
#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, n, i, nombre;
    nombre=1;
    printf("Nombre x: ");
    scanf("%d", &x);
    printf("Puissance n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        nombre=nombre*x;
    }
    printf("Nombre :%d",nombre);
    return EXIT_SUCCESS;
}
