#include <stdio.h>

int main()
{
    int a,b,c[100000]={0,};
    int i,j;
    c[1]=1;

    scanf("%d %d",&a, &b);
    
    for(int i=2; i<=b;i++)
    {
        for(int j=2;i*j<=b;j++)
        {
            c[i*j]=1;
        }
    }
    
    for(int i=a;i<=b; i++)
    {
        if(c[i]==0)
        printf("%d\n",i);
    }
    return 0;
}