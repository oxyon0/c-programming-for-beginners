#include <stdio.h>
int main(){
    int ab,bc,ca;
    printf("enter the ab : ");
    scanf("%d",&ab);
    printf("enter the bc : ");
    scanf("%d",&bc);
    printf("enter the ca : ");
    scanf("%d",&ca);
 if(ab>bc && ab>ca)
 printf("side ab is best ");
 if(bc>ab && bc>ca)
 printf("side bc is best");
 else
 printf("side ca is best");
 return 0;

}
