#include<stdio.h>
int main(void)
{
  int row,column ,i,j;
  printf("Enter the value of row:");
  scanf("%d",&row);
   printf("Enter the value of column:");
  scanf("%d",&column);
  int arr1[row][column];
  printf("Enter The Value\n");
  
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
        scanf("%d",&arr1[i][j]);
  }
  printf("Printing Matrix\n");
  for(i=0;i<row;i++)
   {
    for(j=0;j<column;j++)
        printf("%d\t",arr1[i][j]);
        printf("\n");
   }
   printf("The diagonal elements are:\n");
   for(i=0;i<row;i++)
   {
    for(j=0;j<column;j++)
         if(i==j)
         {
            printf("%d\t",arr1[i][j]);
         }
   }
}