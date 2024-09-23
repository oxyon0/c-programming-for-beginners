#include <stdio.h>
int main (){
int n;
printf("enter no. : ");
scanf("%d",&n);
int a = 0;
for(int i = 2;i <=n-1;i++){
if(n%i==0)
printf("\nno. is composite");
break;
}
if(n==1)
printf("neither prime nor composite");
else if(a==0)
printf("prime no.");
return 0;
