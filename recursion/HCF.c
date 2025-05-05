#include<stdio.h>
int min(int a,int b){
if(a<b) return b;
else return a;
}
int g(int a,int b){
for(int i=1;i<=min(a,b);i++){
int hcf = 1;
if(a%i==0 && b%i==0){
  hcf = i;
}
}
return hcf;
}
int main(){
  int a,b;
  printf("a : ");
  scanf("%d",&a);
  printf("b : ");
  scanf("%d",&b);
  int hcf = g(a,b);
  printf("the hcf of %d and %d is : %d",a,b,hcf);
  return 0;
}
