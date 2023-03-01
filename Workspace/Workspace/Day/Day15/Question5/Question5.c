#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    int i=0,n,count=0;
    printf("Enter the string: \n");
    gets(string);
 while (string[i]!='\0')
 {
     if (string[i]==' ')
     {
         count=count+1;
     }
      i++;
    }
 printf("%d",count+1);
}