
#include <stdio.h>



//______________________________________________
int main(void){

char stgtab[][20] ={"npha","sami","abdo"};
int l= sizeof(stgtab)/sizeof(stgtab[0]);
int i=0;

printf("%d \n",l);


while(i<l){
    printf("%s\n",stgtab[i]);
    i++;
}
return 0;
}

