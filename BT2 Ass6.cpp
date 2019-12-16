#include <stdio.h>
int main(){
	int n;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	int so[n];
	for(int i=0;i<n;++i){
		printf("nhap so[%d]\n",i);
		scanf("%d",&so[i]);
	}int x=0,count=0;
	for(int i=0;i<n;++i){
		if(so[i]%2==1&&i%2==0){
			x+=so[i];
			count++;
		}
	}float p=(float)x/count;
	printf("trung binh cong cua cac so le o vi tri chan la %f\n",p);
	return 0;
}
