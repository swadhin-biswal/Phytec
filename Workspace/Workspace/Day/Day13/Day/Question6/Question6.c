#include<stdio.h>
#include<string.h>
struct dept{
    char dept[10];
}expdept;
struct employee{
    int empno;
    float salary;
    char ename[10];
    struct dept expdept;
}emp;

int main()
{ 
    emp.empno=10;
    emp.salary=5000;
    emp.ename="Swadhin";
    strcpy(emp.expdept.dept,"Electrical");
    printf("Details %s",emp.expdept.dept);
}