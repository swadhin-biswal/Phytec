#include<stdio.h>
#include<stdlib.h>
int main()
{   
    char name[50];
    
    printf("enter your message\n");
    //scanf("%s", &name);
    fgets(name,sizeof(name),stdin);
    printf("%s\n", name);
    
    return 0;
}
