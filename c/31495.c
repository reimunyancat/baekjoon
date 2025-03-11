#include <stdio.h>
#include <string.h>

int main() {
    char input[55];
    fgets(input, sizeof(input), stdin);
    int len = strlen(input);

    if (input[0] != '"' || input[len - 2] != '"') {
        printf("CE");
        return 0;
    }
    if (len <= 3) {
        printf("CE");
        return 0;
    }

    for (int i = 1; i < len - 2; i++) {
        printf("%c", input[i]);
    }

    return 0;
}
