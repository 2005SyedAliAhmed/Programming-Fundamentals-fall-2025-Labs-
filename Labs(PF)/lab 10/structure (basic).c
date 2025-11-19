#include<stdio.h>
struct students 
{
	char name;
	float age;
	int marks;
	
};
void main()
{
	struct students S1={'Ali',20.7,60};
	struct students S2={'Ahmed',60.7,40};
	struct students S3={'Alia',20.7,60};
	printf("%f",S1.age);
}
