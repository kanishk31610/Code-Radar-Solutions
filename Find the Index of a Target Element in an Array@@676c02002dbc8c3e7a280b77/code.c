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
    for(int i = 0;i<a;i++){
        if(arr[i]==t){
            printf("%d",i);
        }
        else{
            printf("-1");
        }
    }


    return 0;
}