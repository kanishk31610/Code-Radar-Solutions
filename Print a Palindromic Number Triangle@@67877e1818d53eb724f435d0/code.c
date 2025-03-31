#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        for(int q=1;q<=(a-i);q++){
            printf(" ");
        }
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        int num = i-1;
        for(int k =1;k<=i-1;k++){
            printf("%d",num);
            num--;
        }
        printf("\n");
    }
    return 0;
}


