#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
#define rep(i,l,r) for(ll i=(l);i<(r);i++)
#define max(p,q) ((p)>(q)?(p):(q))
#define min(p,q) ((p)<(q)?(p):(q))
#define chmax(a,b) ((a)=(a)>(b)?(a):(b))
#define chmin(a,b) ((a)=(a)<(b)?(a):(b))
#define abs(p) ((p)>=(0)?(p):(-(p)))
int cmp(const void *a, const void *b);
//your code here!

int main(void){
    char s[11], ans[11];
    ll a=0;
    scanf("%s", s);
    printf("%d\n", strlen(s));
    rep(i, 0, strlen(s)){
        if(s[i]=='B') {
            if(a>0) {
                ans[a] = '\0';
                a--;
            }
        }
        else {
            ans[a] = s[i];
            a++;
        }
    }
    printf("%s\n", ans);
    return 0;
}

int cmp(const void *a, const void *b){
    ll A=*(ll *)a, B=*(ll *)b;
    if(A==B)return 0;
    else return A>B ? 1:-1;//昇順ソート
}
