#include<stdio.h>

int main()
{
    int a;
    int b[100000];
    scanf("%d",&a);

    for(int i=2; i<=a;i++)
    {
        b[i]=b[i-1]+1;
        if(i%3==0 && b[i]>b[i/3]+1)
            b[i]=b[i/3]+1;
        if(i%2==0 && b[i]>b[i/2]+1)
            b[i]=b[i/2]+1;
    }
    printf("%d",b[a]);
    printf("\n");
    return 0;
}