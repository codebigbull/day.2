 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
    int M = 0;
    scanf("%d", &M);
    char a = { M % 5 == 0 ? "YES" : "NO" };
    printf("%s", a);
    return 0;
}