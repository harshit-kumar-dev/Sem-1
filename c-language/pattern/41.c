#include<stdio.h>
int main(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*(n-i)+1;j++){
            if(i==1 || i==j || i+j==10) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}