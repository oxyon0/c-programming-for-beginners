#include <stdio.h>
int add (int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("enter no. : ");
    scanf("%d",&a);
    printf("enter no :");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
}