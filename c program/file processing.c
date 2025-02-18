#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
    fptr=fopen("C:\\c program\\Joe.txt","r");
   char c[5];
   fgets(c,50,fptr);
   printf("%s",c);
   fclose(fptr);
   return 0;

}
