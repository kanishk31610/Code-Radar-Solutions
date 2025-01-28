#include <stdio.h>

int main() {
    char str1[100],str2[100];
    int a;
    scanf("%s",&str1); scanf("%d",&a);
    scanf("%s",&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",str2);
    return 0;
}