#include<stdlib.h>
int main(void){
int tab[] ={1,2,3,5,7,9};
int a = 10 ;
int l = sizeof(tab) / sizeof(int);
//printf("%d" ,tab[5]);

int i;

for (i =l-1 ; i>-1 ; i--) {
  //printf("%d\n", i);
  printf("%d \n" , tab[i]);

}

return 0;
}
