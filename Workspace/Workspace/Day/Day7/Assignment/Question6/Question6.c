#include<stdio.h>
int main()
{
  char a;
  printf("Enter the value");
  scanf("%c",&a);
  if ((a>='a' && a<='z')||(a>='A' && a<='Z'))
  {
    printf("Alphabet");
  }
  else
  {
    printf("Not an alphabets");
  }
}