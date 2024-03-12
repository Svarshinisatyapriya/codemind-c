#include <stdio.h>
int main()
{
    float ht;
    scanf("%f",&ht);
    if(ht<150)
    {
        printf("Person is Dwarf.
");
    }
    else if(ht>150 && ht<=165)
    {
        printf("Person is average heighted.
");
    }
    else if(ht>165 && ht<=195)
    {
        printf("Person is taller.
");
    }
    else
    {
        printf("Abnormal height.
");
    }
}