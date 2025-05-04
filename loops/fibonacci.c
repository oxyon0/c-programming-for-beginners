#include <stdio.h>
int main(){
int n,i,a=0,b=1,c;
  printf("enter n :");
  scanf("%d",&n);
  for(i=0;i<=n;i++){
    c=a+b;
    printf("%d",a);
    c=b;
    b=c;
  }
return 0;
}
