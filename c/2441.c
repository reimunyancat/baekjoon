#include <stdio.h>

int main()
{
    int i, j, p;
    scanf("%d", &p);
    for(j = 0 ; j < p ; j++)
    {
    	for(i = 0 ; i < j; i++) printf(" ");
        for(i = p ; i > j ; i--) printf("*");
        printf("\n");
    }
    return 0;
}
