
#include <stdio.h>
#include <stdlib.h>

int main (){

   int diviseurs, i, nb;
   diviseurs=0;
   
   printf("Nombre: ");
   scanf("%d", &nb);
   
   for(i=1; i<=nb; i++){
      if(nb%i==0){
         diviseurs=diviseurs+1;
      }
   }
   if(diviseurs==2){
      printf(" %d est un nombre premier\n",nb);
   }
   else {
      printf(" %d n'est pas un nombre premier\n",nb);
   }

    return EXIT_SUCCESS;
}
