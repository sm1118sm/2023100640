#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    int repeat;
    
    scanf("%d", &repeat);
    
    int price, count, total = 0;
    
    for (int i = 0; i < repeat; i++) {
        scanf("%d %d", &price, &count);
        total += price * count;
    }
    
    if (total == n){
        printf("Yes");
    }
    
    else{
        printf("No");
    }

    return 0;
}