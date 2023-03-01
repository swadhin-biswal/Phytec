#include<stdio.h>
int main(void)
{
  int row,column ,i,j;
  printf("Enter the value of row:");
  scanf("%d",&row);
   printf("Enter the value of column:");
  scanf("%d",&column);
  int arr1[row][column],arr2[row][column];
   for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
        scanf("%d",&arr1[i][j]);
  }
  for(i=0;i<row;i++)
   {
    for(j=0;j<column;j++)
      arr2[i][j]=arr1[i][j];
   }
   printf("Final Matrix is:\n");
   for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
        printf("%d\t",arr2[i][j]);
        printf("\n");
   }
   return 0;

}