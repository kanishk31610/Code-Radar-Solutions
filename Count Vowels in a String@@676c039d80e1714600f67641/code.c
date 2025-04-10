#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    int len=strlen(str);
    for(int i = 0;i<len;i++){
        if(str[i]=='a'|| str[i]=='e' ||str[i]=='o'||str[i]=='i'||str[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}