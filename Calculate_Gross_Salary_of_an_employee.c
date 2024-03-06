#include <stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    float pf=(a*12)/100;
    d=a+b+c+pf;
    printf("%.2f
",pf);
    printf("%.2f",d);
    
}
