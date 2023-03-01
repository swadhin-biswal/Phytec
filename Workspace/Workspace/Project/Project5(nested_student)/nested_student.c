#include <stdio.h>
#include<stdlib.h>
int main()
{
     struct grades
    {
        char English_grade[20];
        char Mathmatics_grade[20];
        char Science_grade[20];
        char Hindi_grade[20];
        char social_studies_grade[20];
    };
    struct details
    {
        char name[50];
        char gender[50];
        int Phone_Number;
        int sic;
        struct grades all;
    };
    struct details topic[100];
    int n, i, sum = 0;

    printf("Enter number of Students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Student name: \n");
        scanf("%s", &topic[i].name);
        printf("Student Gender(male-m/female-f): \n");
        scanf("%s", &topic[i].gender);
        printf("Student Mobile number: \n");
        scanf("%d", &topic[i].Phone_Number);
        printf("ID: \n");
        scanf("%d", &topic[i].sic);
        printf("Grades in English: \n");
        scanf("%s", &topic[i].all.English_grade);
        printf("Grades in Mathmatics: \n");
        scanf("%s", &topic[i].all.Mathmatics_grade);
        printf("Grades in Science: \n");
        scanf("%s", &topic[i].all.Science_grade);
        printf("Grades in Hindi: \n");
        scanf("%s", &topic[i].all.Hindi_grade);
        printf("Grades in Social Science: \n");
        scanf("%s", &topic[i].all.social_studies_grade);
    }
    system("cls");
    printf("                                                         *****  STUDENT DETAILS ***** \n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("ROLL.No.|    NAME       |    Gender    |   Phone Number   |     ID    |   English_grade  |    Mathmatics_grade  |   Science_grade |   Hindi_grade  |   social_studies_grade |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    printf("%d\t  %-15s\t%-s\t  %-4d\t     %-4d\t\t%-15s\t %-15s  \t%-15s\t%-15s\t  %-15s   \n", i + 1, topic[i].name, topic[i].gender, topic[i].Phone_Number, topic[i].sic, topic[i].all.English_grade,topic[i].all.Mathmatics_grade, topic[i].all.Science_grade, topic[i].all.Hindi_grade, topic[i].all.social_studies_grade);
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}