#include<stdio.h>

int isPrime(int x){
    for(int i = 2;i<x;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    
    return 0;
}