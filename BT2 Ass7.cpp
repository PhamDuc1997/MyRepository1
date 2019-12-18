#include <stdio.h>
int main(){
	int ary[4][4];
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			printf("nhap ary[%d][%d]=",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	int sum1=0,sum2=0;
	for(int i=0;i<4;++i){
			sum1+=ary[i][i];
			sum2+=ary[i][3-i];
		}
	float p=(float)(sum1+sum2)/8;
	printf(" trung binh duong cheo la %f\n",p);
	
	
	return 0;
}
