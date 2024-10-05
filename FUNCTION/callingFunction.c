#include <stdio.h>
void x (){
    printf("1234\n");
    return;
}
void y (){
    printf("5678\n");
    x();
    return;
}
void z(){
    printf("9012\n");
    y ();
    return;
}
int main(){
    z ();
    return 0;
}