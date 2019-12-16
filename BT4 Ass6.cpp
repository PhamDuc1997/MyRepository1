#include <stdio.h>
int main(){
	int n;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	int so[n],x;
	printf("lam on nhap phan tu dau tien cua day so[0]\n");
	scanf("%d",&so[0]);
	for(int i=1;i<n;++i){
		printf("nhap so so[%d]=\n",i);
		scanf("%d",&so[i]);
		x=so[0];
	if(so[i]==x){
		printf("Trung so lam on nhap lai so[%d]=");
		scanf("%d",&so[i]);
}else x=so[i];}
	for (int i=0;i<n;i++){
	printf("so[%d]=%d\n",i,so[i]);
	}
	return 0;
}
	
