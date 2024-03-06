#include <stdio.h>
int main()
{
    int min,Hour,rm;
    scanf("%d",&min);
    Hour=min/60;
    rm = min%60;
    printf("%d Hour(s) %d Minute(s)",Hour,rm);
    
}