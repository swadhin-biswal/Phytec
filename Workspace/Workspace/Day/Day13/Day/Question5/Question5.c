#include<stdio.h>
#include<string.h>
struct employee{
    int empno;
    float salary;
    char ename[10];
};
int main()
{
    struct employee emp[2]={{10,5000,"Swadhin"},{11,7000,"Pritam"}};
    display(emp);
    
}
int display(struct employee emp[])
{
    int i;
    for(i=0;i<2;i++)
    {
    printf("%d\n",emp[i].empno);
    printf("%s\n",emp[i].ename);
    printf("%f\n",emp[i].salary);
    }

}
