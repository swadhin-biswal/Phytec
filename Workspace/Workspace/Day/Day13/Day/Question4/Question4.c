#include<stdio.h>
#include<string.h>
struct employee{
    int empno;
    float salary;
    char ename[10];
};
int main()
{
    struct employee emp1;
    printf("Enter the value\n");

    scanf("%d",&emp1.empno);
    scanf("%f",&emp1.salary);
    scanf("%s",&emp1.ename);


    printf("%d\n",emp1.empno);
    printf("%s\n",emp1.ename);
    printf("%f\n",emp1.salary);

}


