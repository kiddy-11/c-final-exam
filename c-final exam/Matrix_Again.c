#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);
    int mtrix[N][M];

    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++)
        {
            scanf("%d",&mtrix[i][j]);
        }
    }
    for (int j=0;j<M;j++)
    {
        printf("%d ",mtrix[N-1][j]);
    }
    printf("\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",mtrix[i][M-1]);
    }
    return 0;
}