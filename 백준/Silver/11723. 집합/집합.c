#include <stdio.h>
#include <string.h>

int main(){
    int value[21] = {0};
    
    int m;
    
    scanf("%d", &m);
    
    while (m--){
        char cal[10];
        int x;
        
        scanf("%s", &cal);
        
        if (strcmp(cal, "add") == 0){
            scanf("%d", &x);
            value[x] = 1;
        }
        
        else if (strcmp(cal, "remove") == 0){
            scanf("%d", &x);
            value[x] = 0;
        }
        
        else if (strcmp(cal, "check") == 0){
            scanf("%d", &x);
            printf("%d\n", value[x]);
        }
        
        else if (strcmp(cal, "toggle") == 0){
            scanf("%d", &x);
            value[x] = !value[x];
        }
        
        else if (strcmp(cal, "all") == 0){
            for (int i = 1; i <= 20; i++){
                value[i] = 1;
            }
        }
        
        else if (strcmp(cal, "empty") == 0){
            for (int i = 1; i <= 20; i++){
                value[i] = 0;
            }
        }
    }
    
    return 0;
}