#include<stdio.h>
int sum(int n){
if(n==0 || n==1) return n;
return n+sum(n-1);
}
int main(){
int n;
printf("n : ");
scanf("%d",&n);
int s=sum(n);
printf("%d",s);
return 0;
}
