#include <stdio.h>
int main(){
    int a=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2*i-1;j++){
            if(i+j<4)printf(" ");
            else printf("%d",a);
            a++;
        }
        printf("\n");
    }
}