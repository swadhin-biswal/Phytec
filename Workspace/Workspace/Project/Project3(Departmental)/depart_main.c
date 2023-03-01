#include <stdio.h>
#include <stdlib.h>
 struct emp
 {
    char name[30];
    int id;
    float salary;
  } employees;
int main()
{

    struct doe
    {
        int exp_day;
        int exp_month;
        int exp_year;
    };
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct details
    {
        char name[20];
        int price;
        int code;
        int qty;
        struct date mfg;
        struct doe exp;
    };
    struct details item[100];
    int n, i, sum = 0;

    printf("Enter number of items:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Item name: \n");
        scanf("%s", item[i].name);
        printf("Item code: \n");
        scanf("%d", &item[i].code);
        printf("Quantity: \n");
        scanf("%d", &item[i].qty);
        printf("price: \n");
        scanf("%d", &item[i].price);
        printf("Manufacturing date(dd-mm-yyyy): \n");
        scanf("%d-%d-%d", &item[i].mfg.day, &item[i].mfg.month, &item[i].mfg.year);
        printf("Expiry date(dd-mm-yyyy): \n");
        scanf("%d-%d-%d", &item[i].exp.exp_day, &item[i].exp.exp_month, &item[i].exp.exp_year);
    }
    int h;
    printf("Enter the number of employees");
    scanf("%d",&h);
    struct emp employees[h];
    printf("Enter %d Employee Details \n \n",h);
    for(int i=0; i<h; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",employees[i].name);

        printf("Id: ");
        scanf("%d",&employees[i].id);

        printf("Salary: ");
        scanf("%f",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
    
    printf("                                *****  INVENTORY ***** \n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("S.N.|    NAME       |    CODE    |   QUANTITY   |     PRICE    |   MFG.DATE  |    EXP.DATE  | \n");
    printf("--------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    printf("%d\t%-15s\t%-d\t\t %-4d\t\t%-4d\t%d/%d/%d\t%d/%d/%d   \n", i + 1, item[i].name, item[i].code, item[i].qty, item[i].price, item[i].mfg.day, item[i].mfg.month, item[i].mfg.year, item[i].exp.exp_day, item[i].exp.exp_month, item[i].exp.exp_year);
    printf("---------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        sum = sum + item[i].price;
    }
    printf("                     *****  Total Valuation ***** \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("                          RS:%d/-                                               \n",sum);
    printf("--------------------------------------------------------------------------------\n"); 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<h; i++){
         printf("Employee %d:- \n",i+1);

        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2f \n",employees[i].salary);
 
        printf("\n");
    }

}

    
    
    