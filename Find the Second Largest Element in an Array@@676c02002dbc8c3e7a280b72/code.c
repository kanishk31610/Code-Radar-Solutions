#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int largest= arr[0];
    int slargest=-1;
    for(int i = 1;i<a;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i = 0;i<a;i++){
        if(arr[i]>slargest&&arr[i]<largest){
            slargest=arr[i];
        }
    }
    if(slargest==-1){
        printf("-1");
    }
    else{
        printf("%d",slargest);
    }

    return 0;
}