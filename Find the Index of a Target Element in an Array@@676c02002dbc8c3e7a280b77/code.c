#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);    
    }
    int t;
    scanf("%d",&t);
    int d = arr[t];
    printf("%d",d);

    return 0;
}