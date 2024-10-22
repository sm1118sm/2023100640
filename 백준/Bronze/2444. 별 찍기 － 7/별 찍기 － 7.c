#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    for (int k = 0; k < n; k++) {
        for (int i = k; i < n-1; i++) {
            printf(" ");
        }
    
        for (int j = 0; j < 2*k+1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
     for (int k = 0; k < n-1; k++) {
        for (int i = 0; i < k+1; i++) {
            printf(" ");
        }
    
        for (int j = 0; j < 2*(n-k-2)+1; j++) {
            printf("*");
        }
    
        printf("\n");
    }
    
    
    return 0;
}