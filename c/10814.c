#include <stdio.h>
	
int main()
{
	int i, max_index, min_index, n;
	    
	scanf("%d", &n);
	    
	int a[n];
	    
	for(i = 0; i < n; i++)
	    scanf("%d", &a[i]);
	    
	max_index = min_index = 0;
	    
	for(i = 1; i < n; i++)
	{
	    if(a[i] > a[max_index])
	        max_index = i;
	    if(a[i] < a[min_index])
	        min_index = i;
	}
	    
	printf("%d %d", a[min_index], a[max_index]);
	
	return 0;
}

