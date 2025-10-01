#include<stdio.h>
int main()
{
 int s1,s2,s3;
 printf("Enter side1 of the triangle:")	;
 scanf("%d",&s1);
printf("Enter side2 of the triangle:")	;
 scanf("%d",&s2);
printf("Enter side3 of the triangle:")	;
 scanf("%d",&s3);
 if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
 {
    if(s1==s2 && s1==s3 && s2==s3)
	{
    	printf("The triangle is equilatoral");
	}
	 else if (s1==s2 || s2==s3 || s1==s3)
	 {
	 	printf("The triangle is isoscles");
	 } else 
	 {  
	   printf("The triangle is scalene");
	 }
} else {
	         printf(" not a valid triangle");
	       }
    return 0;
}
