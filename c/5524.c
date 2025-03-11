#include <stdio.h>

int main() {
    int n, i, a[1005][1005], j=0;
    
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%s", &a[i][j]);
        for(j = 0 ; a[i][j] != '/0' ; j++) {
            if(a[i][j] > 64 && a[i][j] < 91) a[i][j] += 32;
        }
    }
    for(i = 0 ; i < n ; i++) {
        printf("%s\n", a[i]);
    }
    return 0;
}
