#include <stdio.h>

int main() {
    char nu[55], to[55];
    int n, i, j;
    
    scanf("%d", &n);
    getchar();
    
    for(i = 0 ; i < n ; i++) {
        fgets(nu, sizeof(nu), stdin);
        if(i == 0) for(j = 0 ; nu[j] != '\0' && nu[j] != '\n' ; j++) to[j] = nu[j];
        to[j] = '\0';
        for(j = 0 ; nu[j+1] != '\0' ; j++) if(nu[j] != to[j]) to[j] = '?';
    }
    printf("%s", to);

    return 0;
}
