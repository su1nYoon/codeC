//동적할당 연습
//포인터를 하나 선언

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **dp;
    int n;
    int i;
    int *p;

    printf("동적할당할 배열의 크기를 입력하세요.");
    scanf("%d", &n);
    
    p = (int *)malloc(n*sizeof(int)); //sizeof(int)는 4, 이 크기의 포인터를 만들어라
    for(i = 0; i < n; i++)
    {
        p[i] = i * 10;
        printf("%d\n", p[i]);
    }

    dp = (int **)malloc(n*sizeof(int *)); //메모리 할당. 정수를 가리키는 포인터이기 때문에 sizeof(int *)
    //포인터를 가리키는 포인터
    
    for(i = 0; i < n; i++)
    {
        dp[i] = &p[i];
        printf("%d\n", dp[i]);
        // for(i = 0; i < n; i++)
        // {
        //     printf("%d\n", dp[i]); //10 20 30 40이 제대로 나오는지 확인해보기
        // }
    }

    free(p);
    free(dp);

}
