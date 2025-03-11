#include <stdio.h>

int main()
{
    long int i, p, a, b;
    ll c=1;

    scanf("%ld", &p);

    for(i = 0 ; i < p ; i++)
    {
        c=1;
        scanf("%ld %ld", &a, &b);

        while(b > 0)
        {
            c = c*a;
            b--;
            if (c >= 10) c = c%10;
        }
        c = c % 10;

        if (c == 0) c = 10;

        printf("%lld\n", c);
    }

    return 0;
}
