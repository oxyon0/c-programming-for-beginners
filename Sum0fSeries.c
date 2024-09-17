#include <stdio.h>
//here,find sum of 1-2+3-4 like questions
int main(){
int n;
printf("enter no. :");
scanf("%d",&n);
int sum = 0;
for(int i = 1;i<=n;i++){
if(i%2!=0) sum = sum + i;
else sum = sum - i;
}
printf("value is : %d",sum);
return 0;
}