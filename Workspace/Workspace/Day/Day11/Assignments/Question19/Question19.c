#include <stdio.h>
int main(void)
{
    int MAX, i;
    printf("Enter the size\n");
    scanf("%d", &MAX);
    int arr[MAX];
    printf("Enter the elements\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=MAX-1;i>=0;i--)
    {
        printf("\nThe final array is:%d\n",arr[i]);
    }
}