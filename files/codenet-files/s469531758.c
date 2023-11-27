#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[2][50000][2]={0},count[2]={0,0},j,i,tmp;
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		if(i%2==0){
			if(count[0]==0){
				a[0][count[0]][0]=tmp;
				a[0][count[0]][1]++;
				count[0]++;
			}
			else {
				for(j=0;j<count[0];j++){
					if(a[0][j][0]==tmp){
						a[0][j][1]++;
						break;
					}
				}
				if(j==count[0]){
					a[0][count[0]][0]=tmp;
					a[0][count[0]][1]++;
					count[0]++;
				}
			}
		}
		if(i%2==1){
			if(count[1]==0){
				a[1][count[1]][0]=tmp;
				a[1][count[1]][1]++;
				count[1]++;
			}
			else {
				for(j=0;j<count[1];j++){
					if(a[1][j][0]==tmp){
						a[1][j][1]++;
						break;
					}
				}
				if(j==count[1]){
					a[1][count[0]][0]=tmp;
					a[1][count[0]][1]++;
					count[1]++;
				}
			}
		}
	}
	int max[2]={0},mtmp[2]={0},yobi[2]={0,0};
	for(i=0;i<count[0];i++){
		if(max[0]<a[0][i][1]){
			yobi[0]=mtmp[0];
			max[0]=a[0][i][1];
			mtmp[0]=a[0][i][0];
		}
	}
	for(i=0;i<count[1];i++){
		if(max[1]<a[1][i][1]){
			yobi[1]=mtmp[1];
			max[1]=a[1][i][1];
			mtmp[1]=a[1][i][0];
		}
	}
	if(mtmp[0]!=mtmp[1]){
//		printf("%d,%d\n",max[0],max[1]);
		printf("%d\n",n-max[0]-max[1]);
	}else{
		int ans=n-max[0]-yobi[1];
		if(n-max[1]-yobi[0]<ans)ans=n-max[1]-yobi[0];
		printf("%d\n",ans);
	}
	return 0;
}