#include <stdio.h>

int main()
{
    int a[9], i, j, sta[9] = {0};
    
    for(i = 0 ; i < 9 ; i++)
        scanf("%d", &a[i]);
    for(j = 0 ; j < 9 ; j++)
    {
        for(i = 0 ; i < 9 ; i++)
        {
            if(a[j] > a[i]) sta[j]+=1;
        }
        if(sta[j] == 8) break;
    }
    printf("%d\n%d", a[j], j+1);

    return 0;
}
