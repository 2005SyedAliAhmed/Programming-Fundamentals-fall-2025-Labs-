#include<stdio.h>
int main()
{  
  int department,subdepartment;
  printf("Select your Department:");
  printf("1. CS\n");
  printf("2. EE\n");
  printf("Enter your choice:");
  scanf("%d",&department);
  switch (department)
  {
  	case 1:
  		printf("You have chosen computer science");
  		printf("Enter your subdepartment in CS:");
  		scanf("%d",&subdepartment);
  		
  		switch (subdepartment)
  		{
  			case 1:
  				printf("Your subdepartment is Data science");
  				break;
  			
  			case 2:
  				printf("Your subdepartment is A.I");
  				break;
  			case 3:
  				printf("Your subdepartment is Cyber Security");
  				break;
  				default:printf("Your subdepartment doesnot exist in CS!");
  				break;
		  }
  	       break;
          case 2:
          	printf("You ahve chosen Electrical Engineering");
          	break;
    default:printf("Your derpartment doesnot exist! here ");
}
}
