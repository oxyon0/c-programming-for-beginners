#include <stdio.h>
int main(){
    int n;
    printf ("enter n ;");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=i;j++){
            int b = a + 64;
            char ch = (char)b;
            if(i%2==0){
                printf(" %d",j);
            }
            else 
            printf(" %c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}