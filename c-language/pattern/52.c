#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=1;i<=n;i++){
        if(i%2==0) a=1;
        else a;
        for(int j=1;j<=n;j++){
            printf("%d",a);
            if(a==0) a=0;
            else a=1;
        }
        printf("\n");
    }
    return 0;
}