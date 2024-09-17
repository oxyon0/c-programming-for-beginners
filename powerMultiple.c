#include <stdio.h>
//code if a is something and b is the power 
int main(){
int a,b;
printf("enter no. a : ");
scanf("%d",&a);
printf("enter no. b : ");
scanf("%d",&b);
int multiple = 1;
for(int i=1;i<=b;i++){
multiple = multiple*a;
}
printf("multiple is : %d",multiple);
return 0;
}