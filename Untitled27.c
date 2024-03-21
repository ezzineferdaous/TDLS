void maximum(int *x, int *y, int *m){
if(*x>*y)
   *m=*x;
else
   *m=*y;
}
int main(){
int a, b, max;
printf("enter votre a : ");
scanf("%d",&a);
printf("enter voter b :  ");
scanf("%d",&b);
maximum(&a,&b,&max);
printf("la valeur maximal des deux valeurs %d",max);
return 0;

}





