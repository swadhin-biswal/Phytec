#include<stdio.h>
int main(){
   char ch;
   printf("Enter the alphabet:");
   scanf("%c",&ch);
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   {
    printf("Vowels:");
   }
   else if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
   {
    printf("Vowels:");
   }
   else
   {
    printf("Consonant");
   }
}