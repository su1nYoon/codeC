//power() 입력 x를 제곱, 세제곱, 네제곱 하는 함수
#include <stdio.h>

void power(int x, int *x2, int *x3, int *x4);

int main(void)
{
    int a = 2;
    int b, c, d;

    power(a, &b, &c, &d);

    printf("입력값: %d\n", a);
    printf("제곱: %d\n", b);
    printf("세제곱: %d\n", c);
    printf("네제곱: %d\n", d);

    return 0;
}

void power(int x, int *x2, int *x3, int *x4)
{
    *x2 = x * x;
    *x3 = x * x * x;
    *x4 = x * x * x * x;
}
