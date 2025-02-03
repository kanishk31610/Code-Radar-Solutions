#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>=1){
        printf("Positive");
    }
    else if(a<=-1){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}