#include <stdio.h>
int main (){
int n;
printf("enter no. : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
int a = 1;
for(int j=1;j<=n;j++){ //switch n with i we get  triangle 
int b = a+64;
char ch = (char)b;
printf("%c ",b);
a++;
}
printf("\n");
}
return 0;
}