#include <stdio.h>
int i, a, j, b;
int main(){
    scanf("%d", &a);
    
    for(i = 0 ; i < a ; i++){
        for(j = 0 ; j <= i ; j++)
            printf("*");
        printf("\n");
    }
    b = a;
    for(i = 0 ; i < b ; i++){
        for(j = a ; j > 1 ; j--)
            printf("*");
        printf("\n");
        a--;
    }
}
