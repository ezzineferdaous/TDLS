#include<stdio.h>


main(){
    int n =100;


    for (int i=1 ; i<=n ; i++) {

   if( i % 3 == 0 && i % 5 == 0){
    printf("fizzbuzz \n");
  }
   if(i % 3 == 0){
    printf("fizz \n");
  }

   if(i % 5 == 0){
    printf("buzz \n");
  }

  else{
    printf("%d \n",i);
  }

}
}







