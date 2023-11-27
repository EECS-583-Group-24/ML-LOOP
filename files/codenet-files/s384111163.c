/*よくばりセット2019/07/13 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MOD 1000000007
typedef long long int ll;
void llswap(ll *x,ll *y){ll temp;temp=*x;*x=*y;*y=temp;}
void swap(int *x,int *y){int tmp;tmp=*x;*x=*y;*y=tmp;}
int max(int x,int y){return x>y?x:y;}
int min(int x,int y){return x>y?y:x;}
ll llmax(ll x,ll y){return x>y?x:y;}
ll llmin(ll x,ll y){return x>y?y:x;}
int asc(const void *a,const void *b){return *(int*)a-*(int*)b;}
int desc(const void *a,const void *b){return *(int*)b-*(int*)a;}

int main(){
    static int n,a[400000];
    static int list[400000],list_n[400000]={};

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        list[i]=a[i];
        list_n[a[i]-1]++;
    }
    qsort(list,n,sizeof(int),desc);

    //for(int i=0;i<n;i++)printf(">%d\n",list[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){     
            if(list[j]!=a[i]){
                printf("%d\n",list[j]);
                break;
            }else{
                if(list_n[a[i]-1]>1){
                    printf("%d\n",list[j]);
                    break;
                }
            }
        }
        
    }
    return 0;


}