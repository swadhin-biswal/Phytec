#include<stdio.h>
#include<string.h>
struct employee{
    int empno;
    float salary;
    char ename[10];
}emp;
int main()
{
    int i;
    struct employee emp1={10,5000,"Swadhin"} ,*poi;
    poi=&emp;
    poi->empno;
    poi->salary;
    poi->ename;
   /* emp1.empno=10;
    strcpy(emp1.ename,"Swadhin");
    emp1.salary=50000;*/
    for(i=0;i<2;i++)
    {
    printf("%d\n",emp1.empno);
    printf("%s\n",emp1.ename);
    printf("%f\n",emp1.salary);
    }
}