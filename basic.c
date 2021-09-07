#include <stdio.h>


int main(int argc, char *argv[]){
   char value='C';
   char *ptr;
   char **ptr2;
   char ***ptr3;
   ptr=&value;
   ptr2=&ptr;
   ptr3=&ptr2;

   printf("[%x] value  : %c\n",&value,value);
   printf("[%x] ptr    : %x ---> %c\n",&ptr,ptr,*ptr);
   printf("[%x] ptr2   : %x ---> %x ----> %c\n",&ptr2,ptr2,*ptr2,**ptr2);
   printf("[%x] ptr3   : %x ---> %x ----> %x ----> %c\n",&ptr3,ptr3,*ptr3,**ptr3,***ptr3);

   return 0;
}
