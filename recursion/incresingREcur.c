#include <stdio.h>
void inc(int n){
    if(n==0) return ;
       inc(n-1);
    printf("\n%d",n);
    return;
}
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    inc(n);
    return 0;
}
