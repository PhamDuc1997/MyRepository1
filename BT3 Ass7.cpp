#include <stdio.h>
int main(){
	int ary1[4][3];
	printf("lam on nhap mang ary1\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;++j){
			printf("nhap ary1[%d][%d]=",i,j);
			scanf("%d",&ary1[i][j]);
		}
	}
	int ary2[4][3];
	printf("lam on nhap mang ary2\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;++j){
			printf("nhap ary2[%d][%d]=",i,j);
			scanf("%d",&ary2[i][j]);
		}
	}
	int ary3[4][3];
	printf("du lieu mang ary3 la tong hai mang tren la\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;++j){
			ary3[i][j]=ary1[i][j]+ary2[i][j];
			printf("ary3[%d][%d]=%d\n",i,j,ary3[i][j]);
		}
	}
	int ary4[4][3];
	printf("du lieu mang ary4 la hieu hai mang tren la\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;++j){
			ary3[i][j]=ary1[i][j]-ary2[i][j];
			printf("ary3[%d][%d]=%d\n",i,j,ary3[i][j]);
		}
	}
	return 0;
}
