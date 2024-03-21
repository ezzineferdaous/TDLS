#include<stdio.h>


main(){

int tab[3]={2900,20,29000};
int max = tab[0];
int i=0;
    while( i < 3){

        if(tab[i]>max)
           max=tab[i];


           i++ ;
       }

        printf("max tab:%d \n",max);



}
