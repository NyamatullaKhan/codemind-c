#include<stdio.h>
int main()
{
    int n,m,r,i;
    scanf("%d%d%d",&n,&m,&r);
    for(i=m;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,i*n);
    }
}