#include<stdio.h>


int main(){
    float J;
    int n;
    printf("enter jour:");
    scanf("%f",&J);
  printf(" Mois \n 1_Jours \n 2_Heures \n 3_Minutes \n 4_Mois\n ");
   printf("Enter your option : ");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf(" jour : %f\n", J);
        break;

    case 2:
        printf(" Heures : %f\n",J*24 );
        break;

    case 3:
        printf(" Minutes : %f\n",J *60);
        break;

      case 4:
        printf(" second :%.2f\n ",J / 30.0);
        break;



    }
    return 0 ;

}
