#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int mat[m][n];
    int sum=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
}