#include <stdio.h>
int main(){
int n;
printf("enter the no.: ");
scanf("%d",&n);
int count = 0;
while(n!=0){
count++;
n =n/10;
}
printf("\nthe digits are : %d",count);
return 0;
}