#include <stdio.h>
#include <string.h>

int main()
 {
 char source[]="Hello";
 char destination[20];
  // Copying the  string using strcpy 
  strcpy(destination,source);
  printf("Copied string: %s\n", destination);
  return 0;
}
