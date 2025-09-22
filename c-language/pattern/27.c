// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*(n-i)+1){
//             if(j<i)printf(" ");
//             else if(j<=2*(n-1)+1) printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            printf("%d",k);
        }
        printf("\n");
        
    }
    return 0;
}