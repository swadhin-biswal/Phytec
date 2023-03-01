#include<stdio.h>
int main(void){
    int MAX,i,j,comp;
    printf("Enter the size\n");
    scanf("%d",&MAX);
      int arr[MAX];
      printf("Enter the elements\n");
    for(i=0;i<MAX;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(i=0;i<MAX;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<MAX-1;i++)
    {
        for(j=0;j<MAX-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                comp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=comp;
            }
        }
    }
    printf("\nThe Sorted list is\n");
    for(i=0;i<MAX;i++)
       printf("%d\t",arr[i]);
       printf("\n");
return 0;

}