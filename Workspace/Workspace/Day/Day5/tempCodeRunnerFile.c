#include <stdio.h>
int main()
{
    int num, a, b;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (a=7; a>=0; a--)
    {
        b = (num>>a) & 0x1;
        printf("Position:%d\n",a);
        printf("Binary value is:%d\n", b);
    }
}