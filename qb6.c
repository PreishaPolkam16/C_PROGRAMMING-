#include <stdio.h>
int main()
{
int m1,m2,m3,m4,m5,total;
    float avg;
    printf("Enter marks of 5 subjects");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    printf("Total=%d\n",total);
    avg=total/5;
    printf("Average=%f",avg);
    return 0;
}
