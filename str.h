#include<stdio.h>
size_t strlen(char *str){
  size_t cmp = 0;
  while(*str!='\0'){
        cmp++;
        str++;
  }

  return cmp;

 }
 int islower(int c){

    if( c>='a' && c<='z'){

       return 1 ;
    }
    else
    {
        return 0;
    }



 }

 int isupper(int c){
 if(c<='A' && c>='Z')

    return 1;

    else
       return 0;


 }

 int tolower(int c){
      if(islower(c))
        return(c+32)


 }

 int toupper(int c){
     if(isupper(c))

      return(c-32));



 }
