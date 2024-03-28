#include<stdio.h>

int main()
{
    int a;
    long long b[100];
    scanf("%d",&a);
    
    b[0]=0;
    b[1]=1;
    b[2]=1;

    for(int i=3;i<=a;++i)
    {
        b[i]=b[i-1]+b[i-2];
    }
    printf("%lld\n", b[a]);
    
    return 0;
}