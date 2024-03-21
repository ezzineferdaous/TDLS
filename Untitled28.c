#include>sdio.h>

size_t strlen(char *str){
  size_t cmp = 0;
  while(*str!='\0'){
        cmp++;
        str++;
  }

  return cmp;

 }

 int main(){
     strlen();

 }








