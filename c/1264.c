#include <stdio.h>
#include <string.h>

int main() {
    int b, i, c;
    char a[257];
    while (1) {
        b = 0;
        fgets(a, sizeof(a), stdin);
        if (a[0] == '#')  return 0;
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                b++;
        }
		printf("%d\n", b);
    }
    return 0;
}

