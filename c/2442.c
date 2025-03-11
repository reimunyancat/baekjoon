#include <stdio.h>

int main()
{
    int i, j, p, l=1;
    scanf("%d", &p);
    for(j = 0 ; j < p ; j++)
    {
    	for(i = p-1 ; i > j; i--) printf(" ");
        for(i = 0 ; i < l ; i++) printf("*");
        l+=2;
        printf("\n");
    }
    return 0;
}
