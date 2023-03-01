#include <stdio.h>
#include <string.h>
int main()
{
    char string[50];
    int i = 0, h = 0, l = 0, g = 0;
    printf("Enter the string: \n");
    gets(string);
    while (string[i] != '\0')
    {
        if ((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
        {
            h++;
        }
        else if (string[i] >= 46 && string[i] <= 57)
        {
            l++;
        }
        else
        {
            g++;
        }
        i++;
    }
    printf("Alphabets%d\n", h);
    printf("Numbers%d\n", l);
    printf("Special Characters%d\n", g);
}
