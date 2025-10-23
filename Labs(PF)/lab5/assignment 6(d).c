#include<stdio.h>
int main ()
{
 int program;
 int year;
 printf("Enter your program: ");
 scanf("%d",&program);
 switch(program)
 {
 	 case 1:
 	 	printf("Your in computer science program\n");
 	 	printf("Enter your year:");
 	 	scanf("%d",&year);
 	 		switch(year)
		  {
 	 		case 1:
 	 			printf("Your in 1st year!");
 	 			break;
 	 		case 2:
 	           printf("Your in 2nd year!");
 	           break;
 	        default: printf("You dont belong in these years");
 	        break;
		  }
		  break;
 	 case 2:
 	 	printf("Your in Electrical Engineering  program\n");
 	 	printf("Enter your year:");
 	 	scanf("%d",&year);
 	switch(year)
		  {
 	 		case 1:
 	 			printf("Your in 1st year!");
 	 			break;
 	 		case 2:
 	           printf("Your in 2nd year!");
 	           break;
 	        default: printf("You dont belong in these years");
		  }
  default: printf("You dont belong in these Programs");
 }
 return 0;	
}
