#include <stdio.h>
int main(){
	int n;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	int so[n];
	for(int i=0;i<n;++i){
		printf("nhap so[%d]\n",i);
		scanf("%d",&so[i]);
	} 
	for(int i=0;i<n;++i){
		if(so[i]<0){
			so[i]=0;
		}
	}for(int i=0;i<n;++i){
		printf("day so sau khi duoc thay the so am thanh 0 la\n");
		printf(" so[%d]=%d\n",i,so[i]);
	}
	return 0;
}
	
