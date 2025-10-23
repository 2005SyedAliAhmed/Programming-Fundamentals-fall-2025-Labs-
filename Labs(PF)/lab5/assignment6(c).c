# include<stdio.h>
int main()
{
 int days;
 char time;
printf("Enter the day of the week (1=Monday ,.....,6=Saturday,7=Sunday):");
scanf("%d",&days);
switch (days)
{
 case 1 : case 2: case 3: case 4 : case 5:
  printf("Enter time(M=Morning,E=Evening): ");
  scanf("%c",&time);
  switch(time)
  {
  	case 'm': case 'M':
  		printf("Activity= Go to Class\n");
  		break;
  	
  	case 'e': case 'E':
  		printf("Activity = Do your Homework\n");
  		break;
  		default:printf("Invalid time");
  }
  break;
{
   case 6 : case 7:
   	printf("Enter time(M=Morning,E=Evening): ");
    scanf("%c",&time);
   switch(time)
   {
   	case 'M': case 'm':
   	printf("Activity: Play sports");
   	break;
   	case 'E': case 'e':
   	 printf("Activity: Watch movies");
   	break;
   	 default : printf("Invalid time!");
   }
   break;
}	
} return 0;
}
