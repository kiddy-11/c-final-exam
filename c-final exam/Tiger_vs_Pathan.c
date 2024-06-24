#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);
    int Tiger=0;
    int Pathan=0;
    for(int i=0; i<n; i++){
        if(a[i]=='T'){
            Tiger++;
        }
        if(a[i]=='P'){
            Pathan++;
        }
    }
    if(Tiger==Pathan){
        printf("Draw\n");
    }
    else if(Tiger>Pathan){
        printf("Tiger\n");
    }
    else{
        printf("Pathaan\n");
    }
    }
    return 0;
}