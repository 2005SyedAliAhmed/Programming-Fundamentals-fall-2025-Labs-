#include<stdio.h>
int main()
{
 float temp;
 printf("Enter the temperature in celsius:");
 scanf("%f",&temp);
 float ftemp= (temp*9/5)+32;
 if (temp>=30)
 {
 	printf("Its hot! Stay hydrated and wear light cloths.\n%0.1f=%0.2f",temp,ftemp);
 	
 } else if (temp>=20)
   {
   	printf("Nice weather! Perfct for Outdoor activities.\n%0.1f==%0.2f",temp,ftemp);
   } else if (temp>=10)
      {
      	printf("Cool weather.Wear a light jacket.\n%0.1f=%0.2f",temp,ftemp);
	  }
	    else if (temp>=0)
	    {  
	      printf("Cold! Wear warm cloths.\n%0.1f=%0.2f",temp,ftemp);
		}
		   else
		   {
		   	printf("Freezing! Stay indoor and bundle up.\n%0.1f=%0.2f",temp,ftemp);
		   }
}
