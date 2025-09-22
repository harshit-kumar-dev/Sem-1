#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            printf("*");
        
        // if(i>j) printf(" ");
        // else if(j<=2*(n-i)+1) printf("%d",j-i+1);
        // else printf(" ");

        }
        printf("\n");
        
    }
    return 0;
}