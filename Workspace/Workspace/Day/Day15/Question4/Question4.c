#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    int i,n;
    printf("Enter the string: \n");
    gets(string);
    n=strlen(string);
    printf("length %d",n);
    for (i =n ; i>=0;i--)
    {
        printf("%c", string[i]);
    }
}