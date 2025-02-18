#include<stdio.h>
int stringlength(char string1[]){
    int length=0;
    while(string1[length]!='\0'){
    length++;
    }
    return length;
}
void stringcopy(char string1[]){
    int i=0;
    char copy_string1[100];
    while(string1[i]!='\0'){
       copy_string1[i]=string1[i];
       i++;
    }
     copy_string1[i]='\0';
     printf("copied string %s\n",copy_string1);

}
void stringCompare(char string1[],char string2[]){
      int i=0,result=0;
      while(string1[i]!='\0'&&string2[i]!='\0'){
          if(string1[i]!=string2[i]){
           result=1;
           break;
          }

          i++;
     }
    if (string1[i] != '\0' || string2[i] != '\0')
        result = 1;
     if(result==0)
        printf("string1 and string2 are equal\n");
    else
        printf("string1 and string 2 are not equal\n");
}
void stringReverse(char string1[]){
       int i;
      int length=stringlength(string1);
       printf("Reversed string:");
       string1[length]='\0';
       for(i=length-1;i>=0;i--)
       printf("%c",string1[i]);

}
void stringtoLowercase(char string1[]){
       int i=0;
       while(string1[i]!='\0')
    {
        if(string1[i]>='A'&& string1[i]<='Z')
            string1[i]=string1[i]+32;
        i++;
    }}
    void stringtoUppercase(char string1[]){
       int i=0;
       while(string1[i]!='\0')
    {
        if(string1[i]>='a'&& string1[i]<='z')
            string1[i]=string1[i]-32;
        i++;
    }
}

void stringConcat(char string1[], char string2[]) {
    int i = 0, j = 0;
    while (string1[i] != '\0') {
        i++;
    }
    while (string2[j] != '\0') {
        string1[i] = string2[j];
        i++;
        j++;
    }
    string1[i] = '\0';
}
int main(){
    char string1[100],string2[100];
    printf("Enter the string1 ");
    scanf("%[^\n]",string1);
    printf("Enter the string2 ");
    scanf(" %[^\n]",string2);
    printf("Length of string %d\n",stringlength(string1));
    stringcopy(string1);
    stringCompare(string1,string2);
    stringReverse(string1);
    stringtoLowercase(string1);
    printf("\nLower case string %s",string1);
    stringtoUppercase(string1);
    printf("\nUpper case string %s",string1);
    stringConcat(string1, string2);
    printf("\nConcatenated string: %s\n", string1);
    return 0;

}


