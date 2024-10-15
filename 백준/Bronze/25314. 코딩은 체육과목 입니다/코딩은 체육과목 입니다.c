#include <stdio.h>

int main()
{
    int h;
    
    scanf("%d", &h);
    
    for (int i = 0; i < h / 4; i++) {
        printf("long ");
    }
    
    printf("int");

    return 0;
}