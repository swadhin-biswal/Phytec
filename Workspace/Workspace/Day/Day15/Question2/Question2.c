#include <stdio.h> 
int main()
{
    char string[50];
    int i, length = 0;
    printf("Enter the string: \n");
    gets(string);
   
    for (i = 0; i<string[i]; i++)
    {
        length++;
    }
    printf("So, the length of %s = %d\n", string, length);
}