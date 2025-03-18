#include<stdio.h>

int prime_check(int x){
    for(int i = 2;i<x;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    for(int y=0;y<a;y++){
        int num;
        scanf("%d",&num);
        printf("%d\n",prime_check(num));
    }
    return 0;
}