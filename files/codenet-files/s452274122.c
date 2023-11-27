#include <stdio.h>
int main(void)
{
	int i, n;
    int x{100};
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++)
    	scanf("%d",&x{i});
    
    for(i = n - 1; i > 0; i--)
        printf("%d ",x{i});
        
printf("%d\n",x{0});

return 0;
}