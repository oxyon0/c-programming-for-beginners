#include<stdio.h>
void Dec(int n){
if(n==0) return;
    printf("%d",n);
Dec(n-1);
return;
}
int main(){
    int n;
    printf("n : ");
    scanf("%d",&n);
    Dec(n);
    return 0;
}
