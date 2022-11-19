#include<stdio.h>
#include "Header.h"

int main(){
sw=0;
   while(sw!=10){
               printf("Entrer 10 pour exit \n");

   scanf("%d",&sw);
   switch(sw){

       case 1:
           printf("----------------------- \n");
           printf("Entrer un nombre reel : \n");
           scanf("%f",&j);
           //res=sous(a);
           res=soustracion(j);
           printf("-----------\n");
           printf("La partie entier de cette nombre est : ");
           printf("%d \n",res);
           printf("----------------------- \n");

    break;

       case 2:
               printf("----------------------- \n");
               printf("-----Entrer la nombre de mois :");
               //enter between 1-12 (loop)
               scanf("%d",&m);
               if(m<1||m>12){
             do{
                    printf("erreur \nentrer un nombre de mois:");
                    scanf("%d",&m);
               } while(m>12);
                    }
                        if(Mois(m)==1){
                          printf("-----Cette mois a 31 jours-----\n");
                                      }
                                  else{
                                         printf("-----Cette mois a 30 jours-----\n");

                                      }
                printf("----------------------- \n");

   break;
       case 3:
            printf("Entrer la nombre a : \n");
            scanf("%d",&a);

            printf("Entrer la nombre b : \n");
            scanf("%d",&b);

            printf("------------------------------- \n");

            printf("La multiplication avec laddition successive est %d \n",add(a,b));
            printf("------------------------------- \n");

   break;
       case 4:

       printf("veuillez avez entrer la nombre :");
       scanf("%d",&n);
       printf("----------------------- \n");
       printf("la nombre fractional de %d est : %d \n",n,fun(n));
       printf("----------------------- \n");
   break;


       case 10:
           exit(0);
   break;
       default:
        printf("erreur");

   break;





   }

   }



return 0;

}
