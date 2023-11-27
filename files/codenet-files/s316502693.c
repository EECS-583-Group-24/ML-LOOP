#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define bit(n,m)(((n)>>(m))&1)
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
int downll(const void*a, const void*b){return*(ll*)a<*(ll*)b?1:*(ll*)a>*(ll*)b?-1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}
void sortdown(ll*a,int n){qsort(a,n,sizeof(ll),downll);}
ll pom(ll a,ll n,int m){ll x=1;for(a%=m;n;n/=2)n&1?x=x*a%m:0,a=a*a%m;return x;}
//#define MOD 998244353
#define MOD 1000000007
#define invp(a,p)pom(a,p-2,p)

ll n;
ll a[200010];
ll m1[200010],m2[200010];
int main(){
	scanf("%lld",&n);
	rep(i,0,n)scanf("%lld",a+i);
	m1[0]=a[0];
	rep(i,1,n)m1[i]=max(m1[i-1],a[i]);
	m2[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--)m2[i]=max(m2[i+1],a[i]);
	rep(i,0,n){
		ll ans=0;
		if(i)ans=max(ans,m1[i-1]);
		ans=max(ans,m2[i+1]);
		printf("%lld\n",ans);
	}
}