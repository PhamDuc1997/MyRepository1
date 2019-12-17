#include <stdio.h>
int main(){
	int n;
	printf("nhap so n\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;++i){
		printf("nhap du lieu ary[%d]\n",i);
		scanf("%d",&ary[i]);
	}int a;
	for(int i=0;i<n;++i){
		if(ary[i]%2!=0){
			a=ary[i];
		}
	}printf("so le o vi tri cuoi cung la %d\n",a);
	return 0;
}
