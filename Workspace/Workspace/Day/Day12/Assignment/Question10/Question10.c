#include<stdio.h>
int main(){
int a[]={3,2,5,0,31,45, 7,67,9};
    int  *q,*p;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
     printf("%d\n",*p);
      printf("%d\n",(*p)++);
       printf("%d\n",(*p)++);
    q--;
    printf("%d\n",(*q+2)--);
    printf("%d\n",(*p+2)-2);
    printf("%d\n",*(p++ -1)-1) ;
    return 0;
}
