#include <stdio.h>
int main(void)
{
    int MAX, i, j, ele;
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
    printf("\nEnter the element to delete:\n");
    scanf("%d", &ele);
    for (i = 0; i < MAX; i++)
    {
        if (ele == arr[i])
        {
            for (j = i; j < MAX; j++)
            {
                arr[j] = arr[j + 1];
            }MAX--;
        }
        
    }
    for (i = 0; i < MAX; i++)
        printf("%d\t", arr[i]);
}