#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("enter no : " );
    scanf("%d",&a);
    printf("enter no : " );
    scanf("%d",&b); 
    int power =pow(a,b);
    printf("%d",power);
    return 0;
}