#include <stdio.h>
int main(){
	int n;
	printf("nhap so n\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;++i){
	printf("nhap du lieu ary[%d]=",i);
	scanf("%d",&ary[i]);
	}int tmp,k,j;
	for(int k=1; k<n;++k){
		j=k-1;
		tmp=ary[k];
		while((j>=0)&&(tmp<ary[j])){
			ary[j+1]=ary[j];
			j--;
		}
		ary[j+1]=tmp;
	}
	for(int i=0;i<n;++i){
		printf("ary[%d]=%d\n",i,ary[i]);
		if(ary[i]>0){
			break;
		}
	}printf("gia tri cuoi cua day tren la gia tri can tim\n");
	return 0;
}
