#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50],copy[50],result[50];
    printf("Enter your 1st string:\n");
    scanf("%s",str1);
    printf("Enter your 2nd string:\n");
    scanf("%s",str2);
    printf("\nUppercase of string 1 = %s\n",strupr(str1));
    printf("Uppercase of string 2 = %s\n",strupr(str2));
    printf("\nLowercase of string 1 = %s\n",strlwr(str1));
    printf("Lowercase of string 2 = %s\n",strlwr(str2));
    printf("\nLength of string 1 = %d\n",strlen(str1));
    printf("Length of string 2 = %d\n",strlen(str2));
    strcpy(copy,str1);
    printf("\ncopied string of string 1 = %s\n",copy);
    printf("\nComparing two strings = %d\n",strcmp(str1,str2));
    strcat(str1,str2);
    printf("\nConcatenation of strings:%s\n",str1);
    printf("\nReverse of string 1 = %s\n",strrev(str1));
    printf("Reverse of string 2 = %s\n",strrev(str2));
    return 0;
}

