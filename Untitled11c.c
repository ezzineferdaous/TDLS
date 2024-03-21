#include<stdio.h>

//reputation
main(){
int a=3, b=8;
printf("avant : a= %d et b= %d\n",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("apres : a= %d et b= %d\n",a,b);

}
