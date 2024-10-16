#include <stdio.h>

int main(){
    int value[9][9];
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            scanf("%d", &value[i][j]);
        }
    }
    
    int maxValue = 0;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (maxValue < value[i][j]){
                maxValue = value[i][j];
            }
        }
    }
    
    printf("%d\n", maxValue);
    
    int k = 1;
    int q = 1;
    
    for (int i = 0; i < 9; i++){
        int q = 1;
        for (int j = 0; j < 9; j++){
            if (maxValue != value[i][j]){
                q++;
            }
            else{
                printf("%d %d\n", k, q);
                break;
            }
        }
        k++;
    }
    
    return 0;
}