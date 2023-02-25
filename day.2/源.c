 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test.1()
{
    //计算y的值
    int x = 0;
    int y = 0;
    scanf("%d\n", &x);
    if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = x > 0 ? -1 : 1;
    }
    printf("%d\n", y);
    return 0;
}

void test.2()
{
    //打印“你是天才嘛”
    int IQ = 0;
    scanf("%d ", &IQ);
    printf("Genius");
    return 0;
}
void test.3()
{
    //发布信息
    printf("I lost my cellphone!");
    return 0;
}
void test.4()
{
    //计算表达式的值
    int a = 0;
    int c = 0;
    int y = 0;
    a = 40;
    c = 212;
    y = (-8 + 22) * a - 10 + c / 2;
    printf("%d", y);
    return 0;
}
void test.5()
{
    //打印小飞机
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");
    return 0;
}
void test.6()
{
    //计算整除
    int M = 0;
    scanf("%d", &M);
    if (M % 5 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
void test.7()
{
    //计算带余数的值
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = a / b;
    int d = a % b;
    printf("%d %d", c, d);
    return 0;
}
void test.8()
{
    //计算平均身高
    float height1 = 0;
    float height2 = 0;
    float height3 = 0;
    float height4 = 0;
    float height5 = 0;
    scanf("%f %f %f %f %f", &height1, &height2, &height3, &height4, &height5);
    float ava = (height1 + height2 + height3 + height4 + height5) / 5;
    printf("%.2f", ava);
    return 0;
}
int main()
{
	return 0;
}