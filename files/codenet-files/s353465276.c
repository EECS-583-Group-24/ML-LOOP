#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	rep(i,0,3){
		char c=getchar();
		putchar(c^8);
	}
}