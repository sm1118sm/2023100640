#include <stdio.h>

int main(){
    
    char a[10000];
    
    scanf("%s", &a[0]);
    
    int len = strlen(a);
    
    printf("%d", len);
    
    return 0;
}