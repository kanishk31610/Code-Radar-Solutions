#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    int len=strlen(str);
    for(int i = 0;i<len;i++){
        if(str[i]=='a'|| str[i]=='e' ||str[i]=='o'||str[i]=='i'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'==str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}