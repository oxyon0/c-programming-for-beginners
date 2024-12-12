#include <stdio.h>
int main(){
int a[5]={1,3,4,5,2};
int sum = 0;
for (int i=0;i<=4;i++){
  sum = sum+a[i];
}
  printf("%d",sum);
  return 0;
}
