//동적할당 연습
//포인터를 하나 선언

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **dp;
    int i;
    int j;
    int h;
    int w;

    printf("동적할당할 배열의 크기를 입력하세요.\n");
    printf("가로 크기 :");
    scanf("%d", &h);
    printf("세로 크기 :");
    scanf("%d", &w);

    dp = (int **)malloc(h*sizeof(int *));
    for(i=0; i<h; i++)
    {
        dp[i] = (int *)malloc(w*sizeof(int));
        
        for(j=0; j<w; j++)
        {
            dp[w][h] = (w*h)*10;
            printf("%d", dp[w][h]);
        }
    }

    free(dp);

}



