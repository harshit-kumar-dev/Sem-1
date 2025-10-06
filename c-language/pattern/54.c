#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2*5;j++){
            if(i+j==6 || j-i==4) printf("*");
            else printf(" ");
        }
        printf("\n");
    }


    for(int i=1;i<=5-1;i++){
        for(int j=1;j<=2*5;j++){
            if(j-i==1 || j+i==9)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}