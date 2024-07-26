#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char* argv[]){
   int id = fork();
   if(id !=0){
    fork();
   }
    printf("Hello World!\n");
     if(id==0){
         printf("Hello from child process\n");
         }else{
             printf("Hello from parent process\n");
             }
    return 0;
}