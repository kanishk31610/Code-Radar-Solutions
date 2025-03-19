#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        return 0;
    }
    for(int i = 1;i<=a-1;i++){
        if(arr[i]>arr[i-1]&&arr[0]>arr[i+1]){
            printf("%d",arr[i]);
            return 0;
        }
    if(arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
    }
    }

    
    return 0;
}