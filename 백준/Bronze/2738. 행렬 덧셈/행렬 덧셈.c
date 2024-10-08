#include <stdio.h>

int main(){
    int a[100][100];
    int b[100][100];
    
    int k, q;
    
    scanf("%d %d", &k, &q);
    
    for (int i = 0; i < k; i++){
        for (int j = 0; j < q; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < k; i++){
        for (int j = 0; j < q; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    for (int i = 0; i < k; i++){
        for (int j = 0; j < q; j++){
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}