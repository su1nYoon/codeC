#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int a = 5, b = 7;
    swap(&a, &b);
    
    printf("%d\n", a);
    return 0;

}

void swap(int *x, int *y){
    int tmp;
    tmp = *x; 
    *x = *y;
    *y = tmp;

}
