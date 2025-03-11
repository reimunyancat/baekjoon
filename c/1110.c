#include <stdio.h>

int main() {
    int a, b, sum=0, to=0, sum1, o=0, suma, sumb;
    
    scanf("%d", &a);
    b = a % 10;
    sumb = b;
    a = a / 10;
    suma = a;
    while(1) {
        sum = a + b;
        if(suma == a && sumb == b) o++;
        if(o == 2) break;
        a = b;
        b = sum % 10;
        to++;
    }
    printf("%d", to);
    return 0;
}