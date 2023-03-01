#include<stdio.h>
int main(){
 int td,tfs;
 float avgc;
 printf("Average Consumption:\n");
 scanf("%d%d",&td,&tfs);
 avgc=td/tfs;
 printf("Calculated Average:%.2f",avgc);
}