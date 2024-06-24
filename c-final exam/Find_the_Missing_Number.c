#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    for(int i=0; i<test; i++){
    long long int d;
    int a, b, c;
    scanf("%lld %d %d %d", &d, &a, &b, &c);
    long long int e= (a*b*c);
    if(e==0){
    printf("-1\n");
    }
    else{
        long long int f=d/e;
        if(d%e!=0){
            printf("-1\n");
        }
        else{
    printf("%lld\n", f);
    }
    }
    }
    return 0;
}