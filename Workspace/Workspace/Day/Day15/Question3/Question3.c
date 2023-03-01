#include<stdio.h>
int main()
{
    char string[50];
    int i;
    printf("Enter the string: \n");
    gets(string);
   
    for (i = 0; i<string[i]; i++)
    {
        printf("%c\t", string[i]);
    }
}