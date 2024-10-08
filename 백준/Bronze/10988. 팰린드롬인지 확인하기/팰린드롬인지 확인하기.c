#include <stdio.h>
int main(){
    char a[10000];
    
    scanf("%s", &a[0]);
    
    int len = strlen(a);
    int count = 0;
    
    for (int i = 0; i < len / 2; i++){
        if (a[i] == a[len - i - 1]){
            count++;
        }
    }
    
    if (count == (len / 2)){
        printf("%d", 1);
    }
    
    else{
        printf("%d", 0);
    }
    
    return 0;
}
