#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        for(int q=1;q<=(a-i);q++){
            printf(" ");
        }
        for(int j = 1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}