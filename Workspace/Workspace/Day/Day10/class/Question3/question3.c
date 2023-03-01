#include<stdio.h>
int main(void)
{
  int row,column ,i,j;
  printf("Enter the value of row:");
  scanf("%d",&row);
   printf("Enter the value of column:");
  scanf("%d",&column);
  int arr1[row][column],arr2[row][column],arr3[row][column];
  printf("Enter The Value\n");
  
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
        scanf("%d",&arr1[i][j]);
  }
  for(i=0;i<row;i++)
   {
    for(j=0;j<column;j++)
        scanf("%d",&arr2[i][j]);
   }
   for(i=0;i<row;i++)
   {
    for(j=0;j<column;j++)
        arr3[i][j]=arr1[i][j]+arr2[i][j];
   }
   printf("Final Matrix is:\n");
   for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
        printf("%d\t",arr3[i][j]);
        printf("\n");
   }
   return 0;

}

    
