#include<stdio.h>
int main(){
    int Test;
    scanf("%d", &Test);
    for(int i=0; i<Test; i++){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0;i<n;i++){
    scanf("%d", &ar[i]);
    }
    int br[n];
    for(int i=0; i<n; i++){
        br[i]=ar[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if(br[i]>br[j]){
                int temp=br[i];
                br[i]=br[j];
                br[j]=temp;
            }
        }
    }

    int C;
    for(int i=0; i<n; i++){
        C=ar[i]-br[i];
        int dfrnc;
        if(C<0){
            dfrnc=-C;
        }
        else{
            dfrnc=C;
        }
        printf("%d ", dfrnc);
    }
    printf("\n");
    }
    return 0;
}