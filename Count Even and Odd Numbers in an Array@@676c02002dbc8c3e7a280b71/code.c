#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int even_count=0;
    int odd_count=0;
    for(int i = 0;i<a;i++){
        if(i%2==0){
            even_count+=arr[i];
        }
        else{
            odd_count+=arr[i];
        }
    }
    printf("%d\n",even_count);
    printf("%d\n",odd_count);
    return 0;
}