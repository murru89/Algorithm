#include<stdio.h>

int main()
{
    int a=1;
    float b=3.99;
    char c='V';
    long long int d=41324322478732793;

    //printf("%d %f %c\n", a,b,c);

    
    printf("%d %d %d\n",a,b,c);
    printf("%f %f %f\n",a,b,c);
    printf("%c %c %c\n",a,b,c);
    printf("%lld\n",d);

    printf("int 자료형의 크기: %d바이트\n", sizeof(int));
    printf("float 자료형의 크기: %d바이트\n", sizeof(float));
    printf("double 자료형의 크기: %d바이트\n", sizeof(double));
    printf("char 자료형의 크기: %d바이트\n", sizeof(char));
    printf("lonf int 자료형의 크기: %d바이트\n", sizeof(long int));
    printf("long long int 자료형의 크기: %d바이트\n", sizeof(long long int));
    printf("unsigned int 자료형의 크기: %d바이트\n", sizeof(unsigned int));
    
    scanf("%d",&e);
    printf("%d",e);
}