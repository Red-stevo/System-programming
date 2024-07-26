#include <stdio.h>  
  
int main() {  
    char input[200];  
  
printf("Enter your name: ");  
fgets(input, sizeof(input), stdin);  
  
printf("You entered: %s", input);  
  
    return 0;  
}  