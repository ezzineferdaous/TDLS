#include<stdio.h>
#include"str.h"

 int main(){
     char *p="pointeur";
     int a='B';
     int b='a';




     printf("%zu\n",strlen(p));
     printf("%d\n",islower(a));
     printf("%d\n",isupper(b));
     printf("%d\n",tolower(a));
     printf("%d\n", toupper(b));


 }
