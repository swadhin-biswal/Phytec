#include<stdio.h>
int main()
{
      struct branch
    {
        char st[30];
        int s1;
    };
    struct str s[] ={{1,"struct1"},{2,"struct2"},{3,"struct3"}};
    printf("%d %s",s[2].s1,(*(s+2)).st);
    return 0;
}