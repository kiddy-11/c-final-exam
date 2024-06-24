//Answer
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int tree=((n-1)/2)+6;
    int s=tree -1;
    int k=1;
    for(int i=1; i<=(tree+5); i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1; j<=k;j++){
            printf("*");
        }
        if(i<=tree-1){
            s--;
            k=k+2;
        }
        else{
            s=5;
            k=n;
        }
        printf("\n");
    }
    return 0;
}