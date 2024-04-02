#include<stdio.h>
/*
int main()
{
    printf("Hello World!\n");
    return 0;
}  */ 
/*
int main()
{
    int a=0;
    int b=0;
    int c=0;

    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);

}
*/
/*
int main()
{
    int a[5]={1,2,3,4,5};

    printf("%d\n",a[0]);
    printf("%d\n",a[4]);

    a[4]=40;

    for(int i=0;i<4;i++)
    {
        printf("%d/t",a[i]);
    }
    printf("\n");
}*/
/*
int main() {
    int day;
    printf("요일 번호를 입력하세요 (1: 월요일, 2: 화요일, ..., 7: 일요일): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("월요일입니다.\\n");
            break;
        case 2:
            printf("화요일입니다.\\n");
            break;
        case 3:
            printf("수요일입니다.\\n");
            break;
        case 4:
            printf("목요일입니다.\\n");
            break;
        case 5:
            printf("금요일입니다.\\n");
            break;
        case 6:
            printf("토요일입니다.\\n");
            break;
        case 7:
            printf("일요일입니다.\\n");
            break;
        default:
            printf("잘못된 요일 번호입니다.\\n");
            break;
    }

    return 0;
}
*/


int main() {
    int sum = 0;
    int a[100];

    for(int i = 0; i <= 8; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i <= 8; i++) 
    {
        sum +=a[i];
    }

    printf("1부터 10까지의 합은 %d입니다.\\n", sum);

    return 0;
}
