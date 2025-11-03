#include <stdio.h>
#include <string.h>
int main()
 {
     char firstName[50], lastName[50];
    printf("Enter your first name: ");
    scanf("%s",firstName);
    printf("Enter your last name: ");
    scanf("%s",lastName);
    strcat(firstName, " ");      
    strcat(firstName, lastName); // Append last name
    printf("Full name: %s\n", firstName);
    return 0;
}
