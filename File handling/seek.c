#include <stdio.h>  
void main(){  
   FILE *fp;  
  
   fp = fopen("sample.txt1","w+");  
   fputs("Today we learnt about  file handling", fp);  
    
   fseek( fp, 22, SEEK_SET );  
   fputs(" implementation of deadlocks", fp);  
   fclose(fp);  
}  