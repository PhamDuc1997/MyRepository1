#include <stdio.h>
int main(){
	int n;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	int so[n];
	for(int i=0;i<n;++i){
		printf("nhap so[%d]\n",i);
		scanf("%d",&so[i]);
		int inv=0;
	for(;so[i]!=0;so[i]/=10){
		inv=inv*10+so[i]%10;}
	printf("so dao nghich la %d\n",inv);
}
	return 0;
}
	
