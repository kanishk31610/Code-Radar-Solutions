#include<stdio.h>
#include<string.h>

int main(){
    char str[100],reverse[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i = len-1;i>=0;i--){
        reverse[i]=str[i];
    }
    reverse[len]='\0';
    if(strcmp(str,reverse)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}