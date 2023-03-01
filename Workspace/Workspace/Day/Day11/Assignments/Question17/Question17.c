#include <stdio.h>
int main(void)
{
    int MAX, i,g,temp,j;
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
    for(i=0;i<=MAX-1;i++)
    {
     for(j=i;j<=MAX-1-i;j++)
         if(arr[j]>arr[j+1])
         {
           temp=arr[j];
           arr[j+1]=arr[j];
           arr[j]=arr[j+1];
         }
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%d\n", arr[i]);
    }
}
