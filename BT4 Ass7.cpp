#include <stdio.h>
int main(){
	int a[4][3],b[3][4];
	for(int i=0;i<4;++i){
		for(int j=0;j<3;++j){
			printf("nhap a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//tim ma tran b
	for(int i=0;i<4;++i){
		for(int j=0;j<3;++j){
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<3;++i){
		for(int j=0;j<4;++j){
			printf("%d\t",b[i][j]);
		}printf("\n");
	}
	return 0;
}
