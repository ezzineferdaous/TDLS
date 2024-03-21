
#include<stdio.h>


int main(){
    int tab[3]={2900,20,29000};
    int max = tab[0];

   for(int i=1 ; i<3 ; i++){
    if(tab[i]>max)
       max=tab[i];



    }
     printf("max tab:%d \n",max);
    }
