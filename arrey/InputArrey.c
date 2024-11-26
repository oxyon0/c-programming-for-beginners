#include <stdio.h>
int main(){
    int a[5];
    for (int i = 0; i <=4; i++)
    {
        printf("enter %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("%d",a[2]);
    return 0;
}