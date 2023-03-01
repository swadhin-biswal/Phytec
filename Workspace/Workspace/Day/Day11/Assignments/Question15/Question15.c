#include <stdio.h>
int main(void)
{
    int MAX, i, j, count=0,avg;
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
   int  lnum=arr[0],snum=arr[MAX];
    for(i=0;i<MAX;i++)
    {
        if(arr[i]>lnum)
        {
            lnum=arr[i];
        }
    }
    printf("\nThe largest of element is:");
    printf("%d",lnum);
    for(i=0;i<MAX;i++)
    {
        if(arr[i]<snum)
        {
            snum=arr[i];
        }
    }
    printf("\nThe smallest of element is:");
    printf("%d",snum);
}