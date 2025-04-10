#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i = len-1;i>=0;i--){
        int reverse[100]=str[i];
    }
    if(str[100]==reverse[100]){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}