#include<stdio.h>
main()
{
	char charct;
 printf("Enter a charcter:");
 scanf("%c",&charct);
 if( charct>='A' && charct<='Z')
 {
  printf("The character '%c' is an Uppercase Letter .\n, charct");	
 }
 else if(charct>='a'&& charct<='z')
 {
 	printf("The character '%c' is an Lowercase Letter .\n, charct");
 }
 else if(charct>='0' && charct<='9')
 {
 	printf("The character '%c' is a digit.\n, charct");
 }
 else
 {
 	printf("The character '%c' is an Special Character.\n, charct");
 }
 return 0;
}
