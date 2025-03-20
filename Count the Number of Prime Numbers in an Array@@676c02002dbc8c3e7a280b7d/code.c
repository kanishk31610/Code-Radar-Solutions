#include<stdio.h>

int is_prime(int n){
    if(n<2) return 0;
    for(int i =2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int prime = 0;
    for(int i = 0;i<a;i++){
        if( is_prime(arr[i])){
            prime++;
        }
    printf("%d",prime);
    }
    

    return 0;
}