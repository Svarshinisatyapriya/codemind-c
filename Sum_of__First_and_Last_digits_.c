#include <stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int k=n%10;
    while (n>0)
    {
        int m=n%10;
        i=m;
        n/=10;
        
    }
    printf("%d",i+k);
}