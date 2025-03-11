#include <stdio.h>

int main()
{
    char a[1000002]={'\0'};
    int i, blank=0;
    fgets(a, sizeof(a), stdin);
    for(i = 0 ; a[i] != '\0' ; i++) if(a[i]==' ') blank++;
    if(a[0]==' ') blank--;
    if(a[i-2]==' ') blank--;
    
    printf("%d", blank+1);
    
    return 0;
}