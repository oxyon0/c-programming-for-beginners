#include<stdio.h>
int main(){
     //we have to make shape of up side down ladder
     //1234
     //123
     //12
     //1
    int n;
    printf("enter : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf(" *");
            
        }
        printf("\n");
    }
    return 0;
}