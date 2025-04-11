#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int length;
    if(fgets(str,sizeof(str),stdin)!=NULL){
        str[strcspn(str,"\n")]='\0';
        length=strlen(str);
        for(int i =length-1;i>=0;i--){
            printf("%c",str[i]);
        }
    }
    
    return 0;
}