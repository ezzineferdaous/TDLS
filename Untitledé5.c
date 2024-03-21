void swap(int *a, int *b){

int c=*a;
 *a=*b;
 *b=c;
printf("avant: a = %c et b = %c\n",a,b);


}
int main(){
int a=1;
int b=4;

printf("apres : a= %d et b = %d\n  ",a,b);

swap(&a,&b);

printf("apres : a= %d et b = %d\n  ",a,b);

    return 0;


}



