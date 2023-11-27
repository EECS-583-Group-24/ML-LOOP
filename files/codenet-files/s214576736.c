#include <stdio.h>

int gcd(int x,int y)
{
	int t;
	t = x%y;
	if(t == 0){
		return y;
	}

	return gcd(y,t);
}

int main()
{
	int x,y;
	int t;
	scanf("%d %d",&x,&y);

	int ans = gcd(x,y);

	printf("%d\n",ans);
	return 0;
}

