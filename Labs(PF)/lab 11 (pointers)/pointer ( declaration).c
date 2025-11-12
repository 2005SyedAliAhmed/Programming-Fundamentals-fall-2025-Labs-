#include<stdio.h>
 int main()
 {
   char i='A';
   char*j=&i; // j is an integer pointer pointing to i
   float k=5.678;
   float*b=&k;
   printf("The address of i is %p\n",&i);
   printf("The address of i is %p\n",j);
   printf("The address of i is %p\n",&k);
   
   printf("The value at address j is %c\n",*(&i));
   
   return 0;
 }
