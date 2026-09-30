#include <stdio.h>
int main()
{
int a,b;
    int c,d,e;
    float f;
    printf("Enter values of 'a' and 'b'");
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%f\n",f);
    return 0;
}
