#include <stdio.h>
void x (int n){
    if(n==0) return ;
    printf("\ngood");
    x(n-1);
    return ;
}
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    x(n);
    return 0;
}
