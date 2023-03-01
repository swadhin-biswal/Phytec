#include <stdio.h>
int main()
{
    int MAX, i, j, even=0,odd=0;
    printf("Enter the size\n");
    scanf("%d", &MAX);
    int arr[MAX];
    printf("Enter the elements\n");
    for (i = 1; i <=MAX; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i<=MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=1;i<=MAX;i++)
    {
        if(arr[i]%2==0)
       {
           even=even+arr[i];
           
       }
       else
       {
           odd=odd+arr[i];
       }
    }
    printf("\nsum of even numbers is :%d\n",even);
    printf("sum of all the odd numbers is:%d\n",odd);
return 0;
}