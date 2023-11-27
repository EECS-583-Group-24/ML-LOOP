#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
/********************************************************************************************************************************/
/* main *************************************************************************************************************************/
/********************************************************************************************************************************/
int DEBUG = 1;										/* デバッグプリント 提出時は0 */
int main()
{
	float	ans = 0;
	int		yn = 0;
	int		W,H,x,y;
	float	Wf,Hf,xf,yf;
	float	ma,mb,na,nb,m,n;
	float	ia,ib,ja,jb,i,j;

	scanf("%d %d %d %d", &W, &H, &x, &y);

	//tate
	ma = W*(H-y);
	mb = W*y;
	m = min(ma,mb);
	//yoko
	na = (W-x)*H;
	nb = x*H;
	n = min(na,nb);
	//naname1
	Wf = W; Hf = H; xf = x; yf = y;
	if ((Wf/Hf)==(xf/yf)) {
		printf("%.6f 1\n", Wf*Hf/2);
		return 0;
	}
	//naname2
	if ( (yf == -1*(Wf/Hf*xf)+Wf) && (xf == -1*(Hf/Wf*yf)+Hf) ) {
		printf("%.6f 1\n", Wf*Hf/2);
		return 0;		
	}


	ans = max(m,n);
	yn = (m==n) ? 1 : 0;

	printf("%.6f %d\n",ans,yn);

	return 0;
}
