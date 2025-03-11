#include <stdio.h>

int main() {
    int n, i;
    ll nx[10000001], max=0, min=99999999999, oo;
    
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++) {
        scanf("%lld", &nx[i]);
        if(nx[i] > max) {
            max = nx[i];
        }
        if(nx[i] < min) {
            min = nx[i];
        }
    }
    oo = max*min;
    printf("%lld", oo);
    return 0;
}